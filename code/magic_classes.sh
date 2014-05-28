#!/bin/bash


#create classes ruby
rprotoc -o src/ address.proto

#create java classes
protoc --java_out=src/  address.proto

#create python classes
protoc --python_out=src/ address.proto
