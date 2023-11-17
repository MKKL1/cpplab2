cmake_minimum_required(VERSION 3.22)
project(lab5)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_executable(lab5
        src/main.cpp
        src/Dictionary.h
        src/Dictionary.cpp)