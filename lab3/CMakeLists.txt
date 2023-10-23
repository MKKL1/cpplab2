cmake_minimum_required(VERSION 3.22)
project(lab3)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(lab3
src/main.cpp
        src/Adding.h)
