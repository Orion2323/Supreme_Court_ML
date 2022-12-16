cmake_minimum_required(VERSION 3.16)
project(Supreme_Court_ML)

set(CMAKE_CXX_STANDARD 14)

include_directories(data)
include_directories(src)

add_executable(Supreme_Court_ML
        src/justice.cpp
        src/justice.hpp
        src/main.cpp
        README.md)
