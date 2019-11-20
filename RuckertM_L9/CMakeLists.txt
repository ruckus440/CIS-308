cmake_minimum_required(VERSION 3.15)
project(RuckertM_L9 C)

set(CMAKE_C_STANDARD 99)

add_executable(RuckertM_L9 main.c Shape.h Shape.c Triangle.h Triangle.c Square.h Square.c)