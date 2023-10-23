cmake_minimum_required(VERSION 3.22)
project(cpplab2)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab2)

add_executable(cpplab2
        lab2/Circle.cpp
        lab2/Circle.h
        lab2/Developer.cpp
        lab2/Developer.h
        lab2/Employee.cpp
        lab2/Employee.h
        lab2/Figure.cpp
        lab2/Figure.h
        lab2/main.cpp
        lab2/Square.cpp
        lab2/Square.h
        lab2/TeamLeader.cpp
        lab2/TeamLeader.h lab2/Bufor.cpp lab2/Bufor.h lab2/MeanBufor.cpp lab2/MeanBufor.h lab2/MaxBufor.cpp lab2/MaxBufor.h)
