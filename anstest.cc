#include "predefine.h"
#include PBHPATH
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void showStudent(const PKGNAME::CLASSNAME& astudent){
    cout<< "student name "<<astudent._name()<<endl;
    cout<< "student sex "<<astudent._sex()<<endl;
    cout<<"student age"<<astudent._age()<<endl;
    cout<<"studen id"<<astudent._studentid()<<endl;
    for(int j=0;j<astudent._phonenumber_size();j++){
        const string & phone_num = astudent._phonenumber(j);
        cout<<"phhone number is "<<phone_num<<endl;
    }
    for(int j=0;j<astudent._selectedcourse_size();j++){
        cout<<"course "<<j<<" infomation "<<endl;
        const PKGNAME::somestudent_Course course = astudent._selectedcourse(j);
        cout<<"course id is "<< course._courseid()<<endl;
        cout<<"course name is "<<course._coursename()<<endl;
    }
}
int main(int argc,char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    if(argc!=2){
        cerr <<"Usage:"<<argv[0]<<" <pb file path>"<< endl;
    }
    PKGNAME::CLASSNAME mystudent;
    {
        fstream input(argv[1], ios::in | ios::binary);
        if(!mystudent.ParseFromIstream(&input)){
            cerr << "Failed to read address book !"<<endl;
            return -1;
        }
    }
    showStudent(mystudent);

    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}