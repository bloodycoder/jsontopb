[toc]

# jsontopb

## 简介

jsontopb是一个用c++语言编写的将json转化为google protocol buffer的工具。

## 编译环境

[protobuf 3.11.4下载地址](https://github.com/protocolbuffers/protobuf/releases/tag/v3.11.4)

[jansson-2.12 下载地址](http://www.digip.org/jansson/releases/)

可选项`python3`

以及安装`pkg-config`,`apt-get install pkg-config`即可。

安装好上述工具。

## 文档

[jansson文档](https://jansson.readthedocs.io/en/latest/)

[protobuf c++官方文档](https://developers.google.com/protocol-buffers/docs/cpptutorial#defining-your-protocol-format)

[language guild](https://developers.google.com/protocol-buffers/docs/proto3) 如何写一个protobuffer schema文件

[c++ generated code](https://developers.google.com/protocol-buffers/docs/reference/cpp-generated)

## 如何使用jsontopb

在`input`文件夹下创建`filename.proto`文件和`filename.json`文件。

其中`json`的格式要能和proto文件的格式对应上，否则会报错。可以参考`input`文件夹下的示例文件。

随后在`jsontopb`工作目录下执行

`./runall.sh input/filename.proto input/filename.json outfilepath`

如果上述命令执行失败

1. 手动对`proto`文件进行编译。在`input`目录下执行
   `protoc --cpp_out=./ ./filename.proto `
2. 修改根目录文件下的`predefine.h`头文件。
3. 根目录下执行`make`
4. 调用`json_to_pb input/filename.json outfilepath`

## 如何检测正确性

`anstest.cc`文件可以把生成的pb二进制文件打印出来，人工检测正确性。

## 目前完成的功能

目前能够实现，以`pb schema`文件和`.json`文件做为输入的转换。

## 还需要完成的功能

- [ ] 高级功能：如何针对json文件自动生成`pb schema`文件
- [ ] `protobuf`的`enum`格式的转换还未实现。
