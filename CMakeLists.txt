cmake_minimum_required(VERSION 3.17)
project(LabWork3)

set(CMAKE_CXX_STANDARD 14)

include_directories(Do_while)
include_directories(For)
include_directories(While)

add_executable(LabWork3
        Do_while/func1.cpp
        Do_while/func2.cpp
        Do_while/func3.cpp
        Do_while/func4.cpp
        Do_while/func5.cpp
        Do_while/Header.h
        Do_while/task1_do_while.cpp
        )
