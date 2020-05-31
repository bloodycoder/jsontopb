if [ $# != 3 ] ;then
echo "usage:$0 <proto file path> <json file path> <output file path>"
echo "eg:./runall.sh input/student.proto input/student.json ./outputfuck"
exit 1;
fi

python3 generateHead.py $1
g++ -g testjs.cc input/student.pb.cc -o json_to_pb `pkg-config --cflags --libs jansson protobuf`

./json_to_pb $2 $3
echo "success"
