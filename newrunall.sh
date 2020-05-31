if [ $# != 2 ] ;then
echo "usage:$0  <json file path> <output file path>"
echo "eg:./runall.sh input/student.json ./outputfuck"
exit 1;
fi

g++ -g JsonToPbSchema.cc -o json2PbSchema `pkg-config --cflags --libs jansson protobuf`
./json2PbSchema $1

python3 generateHead.py ${1%.*}".proto"
g++ -g testjs.cc ${1%.*}".pb.cc" -o json_to_pb `pkg-config --cflags --libs jansson protobuf`

./json_to_pb $1 $2
echo "success"

echo "print pb begin"
g++ -g anstest.cc ${1%.*}".pb.cc" -o anstest `pkg-config --cflags --libs jansson protobuf`
./anstest $2

echo "print pb end"




