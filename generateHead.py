import sys
import os
protopath = sys.argv[1]
protofile = open(protopath,'r')
pkgnamef = True
messagef = True
pkgname = ""
message = ""
while(pkgnamef or messagef):
    line = protofile.readline()
    if(pkgnamef == True and line.find("package")!=-1):
        line = line.replace("\t"," ").replace(";","").strip()
        line = line.split(" ")
        pkgname = line[1].strip()
        pkgnamef = False
    elif(messagef == True and line.find("message")!=-1):
        line = line.replace("\t"," ").replace(";","").replace("{","").strip()
        line = line.split(" ")
        message = line[1].strip()
        messagef = False
protofile.close()
#compile proto input/student.proto
rawproto = protopath
rawproto = rawproto.split("/")[-1]
cmdtorun = "cd input && protoc --cpp_out=./ ./"+rawproto
os.system(cmdtorun)
#
protopath = protopath.replace(".proto","")+".pb.h"
print(protopath + " "+pkgname + " "+message)
predefineH = open("./predefine.h",'w')
predefineH.write('#define PBHPATH "'+protopath+'"\n')
predefineH.write('#define PKGNAME '+pkgname+'\n')
predefineH.write('#define CLASSNAME '+message)
predefineH.close()
#compile proto
