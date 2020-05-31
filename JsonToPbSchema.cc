//============================================================================
// Name        : JsonToPbSchema.cpp
// Author      : zxp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <jansson.h>
#include <iostream>
#include <fstream>
#define BUFSIZE 8192
using namespace std;
void json2PbSchema(ofstream&, json_t*);
struct js_autoptr {
	json_t *ptr;
	js_autoptr(json_t *json) :
			ptr(json) {
	}
	~js_autoptr() {
		if (ptr)
			json_decref(ptr);
	}
	json_t* release() {
		json_t *tmp = ptr;
		ptr = 0;
		return tmp;
	}
};
int field_number=1;
int main(int argc, char *argv[]) {
	if (argc != 2) {
		//
		printf("Usage:%s <input.json> \n", argv[0]);
		return 0;
	}
	char buf[BUFSIZE];
	FILE *fp = fopen(argv[1], "r");
	size_t size = fread(buf, 1, BUFSIZE, fp);
	fclose(fp);
	//load json struct
	json_t *jsroot;
	json_error_t jserr;
	jsroot = json_loadb(buf, size, 0, &jserr);
	if (!jsroot) {
		printf("load json failed\n");
		return 0;
	}
	js_autoptr myautoptr(jsroot);
	if (!json_is_object(jsroot)) {
		printf("not an object\n");
		return 0;
	}
	string str = argv[1];//input/student.json
	string pb_schema_file_name=str.substr(0,str.find('/')+1);//input/
	string json_file_name = str.substr(str.find('/') + 1);//student.json
	string pb_schema_name = json_file_name.substr(0,
			json_file_name.length() - 5);//student
	pb_schema_file_name.append(pb_schema_name).append(".proto");
	ofstream fout(pb_schema_file_name);
	if (fout) {
		fout << "syntax = \"proto2\";" << endl;
		fout << "package somepack;" << endl;
		fout << "message some" << pb_schema_name << "{" << endl;

		json2PbSchema(fout, jsroot);

		fout << "}" << endl;
	}
	fout.close();
	return 0;
}

void json2PbSchema(ofstream &fout, json_t *jsroot) {
	for (void *iter = json_object_iter(jsroot); iter; iter =
			json_object_iter_next(jsroot, iter)) {
		const char *keyname = json_object_iter_key(iter);
		json_t *jf = json_object_iter_value(iter);
		json_t *sub;
		string message_name;
		switch (json_typeof(jf)) {
		case JSON_ARRAY:

			sub = json_array_get(jf, 0);
			if (json_is_object(sub)) {
				message_name=keyname;
				message_name=message_name.append("_mes");
				fout << "message " << message_name << "{" << endl;
				json2PbSchema(fout, sub);
				fout << "}"<<endl;
				fout << "repeated "<<message_name<<" "<<keyname;
			} else {
				fout << "repeated";
				switch (json_typeof(sub)) {
				case JSON_STRING:
					fout << " string " ;
					break;
				case JSON_INTEGER:
					fout << " int32 " ;
					break;
				case JSON_REAL:
					fout << " double " ;
					break;
				case JSON_TRUE:
				case JSON_FALSE:
					fout << " bool " ;
					break;
				case JSON_NULL:
					fout << " unit64 " ;
					break;
				default:
					break;
				}
				fout<< keyname;
			}

			break;
		case JSON_STRING:
			fout << "required string " << keyname;
			break;
		case JSON_INTEGER:
			fout << "required int32 " << keyname ;
			break;
		case JSON_REAL:
			fout << "required double " << keyname ;
			break;
		case JSON_TRUE:
		case JSON_FALSE:
			fout << "required bool " << keyname ;
			break;
		case JSON_OBJECT:
			message_name=keyname;
			message_name=message_name.append("_mes");
			fout << "message " << message_name << "{" << endl;
			json2PbSchema(fout, sub);
			fout << "}"<<endl;
			fout << "required "<<message_name<<" "<<keyname;
			break;
		case JSON_NULL:
			fout << "required unit64 " << keyname ;
			break;
		default:
			fout << "required unit64 " << keyname ;
			break;

		}
		fout<<"="<<field_number++ << ";" << endl;
	}
	return;
}
