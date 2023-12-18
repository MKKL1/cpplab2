cmake_minimum_required(VERSION 3.26)
project(lab11)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab11 src/main.cpp
        src/Person.h
        src/Elem.h
        src/Bufor.cpp
        src/Bufor.h
        src/BuforArr.cpp
        src/BuforArr.h
        src/BuforFile.cpp
        src/BuforFile.h)
