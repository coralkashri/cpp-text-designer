cmake_minimum_required(VERSION 3.17)
project(Designer)

set(CMAKE_CXX_STANDARD 20)

add_executable(Designer tests.cpp designer.cpp designer.h)