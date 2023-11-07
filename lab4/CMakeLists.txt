cmake_minimum_required(VERSION 3.22)
project(lab4)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_executable(lab4
src/main.cpp
        src/Citizen.h
        src/Citizen.cpp
        src/City.h
        src/City.cpp)
