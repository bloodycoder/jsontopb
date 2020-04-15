jsontopb:testjs.cc 
	g++ -g testjs.cc input/student.pb.cc -o json_to_pb `pkg-config --cflags --libs jansson protobuf`
	g++ -g anstest.cc input/student.pb.cc -o anstest `pkg-config --cflags --libs jansson protobuf`
clean :
	rm json_to_pb
	rm anstest
