cmake_minimum_required(VERSION 3.8)
project(lab11v17)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c Struct.h Point.h Struct.c)
add_executable(lab11v17 ${SOURCE_FILES})