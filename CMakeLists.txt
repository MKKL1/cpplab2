cmake_minimum_required(VERSION 3.26)
project(cpplab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpplab1 main.cpp
        Student.cpp
        Student.h
        Person.h
        Person.cpp
        Teacher.cpp
        Teacher.h)
