cmake_minimum_required(VERSION 3.14)
project(Project2 C)

set(CMAKE_C_STANDARD 99)

add_executable(Project2 proj2.c bst.h bst.c io.h io.c)