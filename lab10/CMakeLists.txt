cmake_minimum_required(VERSION 3.26)
project(lab10)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab10 src/main.cpp)

set(BOOST_ROOT "C:\\Users\\student.DESKTOP-N01B4AU\\Downloads\\boost_1_83_0")
find_package(Boost 1.83.0)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()
message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
message(STATUS "Boost_VERSION: ${Boost_VERSION}")
include_directories(${Boost_INCLUDE_DIR})