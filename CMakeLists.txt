
cmake_minimum_required(VERSION 3.10)
project(program)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(program src/main.cpp src/utils.cpp)