#include "predefine.h"
#include PBHPATH
#include <jansson.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#define BUFSIZE 8192
using google::protobuf::Message;
using google::protobuf::Descriptor;
using google::protobuf::MessageFactory;
using google::protobuf::FieldDescriptor;
using google::protobuf::EnumDescriptor;
using google::protobuf::EnumValueDescriptor;
using google::protobuf::Reflection;
using namespace std;
void json2proto(Message&,json_t*);
void subtrans(Message &,const FieldDescriptor *, json_t *);
struct js_autoptr{
    json_t *ptr;
    js_autoptr(json_t *json):ptr(json){}
    ~js_autoptr(){if(ptr)json_decref(ptr);}
    json_t * release(){json_t *tmp=ptr;ptr=0;return tmp;}
};
int main(int argc,char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    if(argc!=3){
        //
        printf("Usage:%s <input.json> <output>\n",argv[0]);
        return 0;
    }
    char buf[BUFSIZE];
    FILE *fp = fopen(argv[1],"r");
    size_t size = fread(buf,1,BUFSIZE,fp);
    fclose(fp);
    //load json struct
    json_t* jsroot;
    json_error_t jserr;
    jsroot = json_loadb(buf,size,0,&jserr);
    if(!jsroot){
        printf("load json failed\n");
        return 0;
    }
    js_autoptr myautoptr(jsroot);
    if(!json_is_object(jsroot)){
        printf("not an object\n");
        return 0;
    }
    //transform to pb Message
    PKGNAME::CLASSNAME pbmsg;
    json2proto(pbmsg,jsroot);
    //write pb
    {
        fstream myoutstream(argv[2], ios::out | ios::trunc | ios::binary);
        if(!pbmsg.SerializeToOstream(&myoutstream)){
            throw "write error";
            return -1;
        }
    }
    google::protobuf::ShutdownProtobufLibrary();
    return 0; 
}
void json2proto(Message& msg,json_t *jsroot){
    const Descriptor *des = msg.GetDescriptor();
    const Reflection *ref = msg.GetReflection();
    if(!des || !ref){
        printf("no descriptor and ref");
        throw "error";
    }
    for(void *iter = json_object_iter(jsroot);iter;iter = json_object_iter_next(jsroot,iter)){
        const char *keyname = json_object_iter_key(iter);
        json_t *jf = json_object_iter_value(iter);
        const FieldDescriptor *field = des->FindFieldByName(keyname);
        if(!field){
            field = ref->FindKnownExtensionByName(keyname);
        }
        if(!field){
            printf("error unknown field: %s ",keyname);
            throw "error";
        }
        if(field->is_repeated()){
            //to do
            if(!json_is_array(jf)){
                printf("error not an array.");
                return;
            }
            for(unsigned int index=0;index<json_array_size(jf);index++){
                subtrans(msg,field,json_array_get(jf,index));
            }
        }else{
            subtrans(msg,field,jf);
        }

    }
}
void subtrans(Message &msg,const FieldDescriptor *field, json_t *jf){
    const Reflection *ref = msg.GetReflection();
    const bool isrepeated = field->is_repeated();
    json_error_t error;
    switch(field->cpp_type()){
        //primative types
        case FieldDescriptor::CPPTYPE_DOUBLE:{
            //trans double;
            double value;
            int r = json_unpack_ex(jf,&error,JSON_STRICT,"F",&value);
            if(r){
                throw "error json unpack";
            }
            if(isrepeated){
                ref->AddDouble(&msg,field,value);
            }
            else{
                ref->SetDouble(&msg,field,value);
            }
            break;
        }
        case FieldDescriptor::CPPTYPE_FLOAT:{
            //trans double;
            double value;
            int r = json_unpack_ex(jf,&error,JSON_STRICT,"F",&value);
            if(r){
                throw "error json unpack";
            }
            if(isrepeated){
                ref->AddFloat(&msg,field,value);
            }
            else{
                ref->SetFloat(&msg,field,value);
            }
            break;
        }
        case FieldDescriptor::CPPTYPE_INT64:{
            //trans double;
            double value;
            int r = json_unpack_ex(jf,&error,JSON_STRICT,"I",&value);
            if(r){
                throw "error json unpack";
            }
            if(isrepeated){
                ref->AddInt64(&msg,field,value);
            }
            else{
                ref->SetInt64(&msg,field,value);
            }
            break;
        }
        case FieldDescriptor::CPPTYPE_UINT64:{
            //trans double;
            double value;
            int r = json_unpack_ex(jf,&error,JSON_STRICT,"I",&value);
            if(r){
                throw "error json unpack";
            }
            if(isrepeated){
                ref->AddUInt64(&msg,field,value);
            }
            else{
                ref->SetUInt64(&msg,field,value);
            }
            break;
        }
        case FieldDescriptor::CPPTYPE_UINT32:{
            //trans double;
            double value;
            int r = json_unpack_ex(jf,&error,JSON_STRICT,"I",&value);
            if(r){
                throw "error json unpack";
            }
            if(isrepeated){
                ref->AddUInt32(&msg,field,value);
            }
            else{
                ref->SetUInt32(&msg,field,value);
            }
            break;
        }
        case FieldDescriptor::CPPTYPE_BOOL:{
            //trans bool;
            int value;
            int r = json_unpack_ex(jf,&error,JSON_STRICT,"b",&value);
            if(r){
                throw "error json unpack";
            }
            if(isrepeated){
                ref->AddBool(&msg,field,value);
            }
            else{
                ref->SetBool(&msg,field,value);
            }
            break;
        }
        case FieldDescriptor::CPPTYPE_INT32:{
            //trans int32;
            json_int_t value;
            int r = json_unpack_ex(jf,&error,JSON_STRICT,"I",&value);
            if(r){
                throw "error json unpack";
            }
            if(isrepeated){
                ref->AddInt32(&msg,field,value);
            }
            else{
                ref->SetInt32(&msg,field,value);
            }
            break;
        }
        //more types
        case FieldDescriptor::CPPTYPE_STRING:{
            if(!json_is_string(jf)){
                throw "not a string";
            }
            const char * value = json_string_value(jf);
            if(isrepeated){
                ref->AddString(&msg,field,value);
            }
            else{
                ref->SetString(&msg,field,value);
            }
            break;
        }
        case FieldDescriptor::CPPTYPE_MESSAGE:{
            //create new message
            Message *new_messa;
            if(isrepeated){
                new_messa = ref->AddMessage(&msg,field);
            }
            else{
                new_messa = ref->MutableMessage(&msg,field);
            }
            //recursive
            json2proto(*new_messa,jf);
            break;
        }
        default:
            break;
    }
    /*
    switch(field->cpp_type()){

    }*/
}