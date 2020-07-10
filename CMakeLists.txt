cmake_minimum_required(VERSION 3.15)
project(SchemaValidator)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(doc)
include_directories(include deps/rapidjson)
add_executable(SchemaValidator src/main.cpp
        src/jsonvalidator.cpp include/jsonvalidator.h
        src/filereader.cpp include/filereader.h)