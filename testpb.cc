#include <iostream>
#include <fstream>
#include <string>
#include "input/addressbook.pb.h"
using namespace std;
void PromtForAddress(goodProto::Person* person){
    cout << "Enter person ID number: ";
    int id;
    cin>>id;
    person->set_id(id);
    cin.ignore(256,'\n');

    cout << "Enter name: ";
    getline(cin,*person->mutable_name());
    cout << "Enter email address(blank for none):";
    string email;
    getline(cin,email);
    if(!email.empty()){
        person->set_email(email);
    }

}
int main(int argc,char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    if(argc!=2){
        cerr <<"Usage:"<<argv[0]<<" ADDRESS_BOOK_FILE"<< endl;
    }
    goodProto::AddressBook address_book;
    PromtForAddress(address_book.add_people());
    {
        fstream output(argv[1], ios::out | ios::trunc | ios::binary);
        if(!address_book.SerializeToOstream(&output)){
            cerr << "Failed to write address book !"<<endl;
            return -1;
        }
    }
    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}