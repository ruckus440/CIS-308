cmake_minimum_required(VERSION 3.15)
project(inclassProj C)

set(CMAKE_C_STANDARD 99)

add_executable(inclassProj main.c person.h person.c Employee.h Employee.c)