cmake_minimum_required(VERSION 3.27)
project(c_prog CXX)

set(CMAKE_C_STANDARD 11)

add_executable(stepik_c++_prog test.cpp
        compile_example/square.hpp
        compile_example/square.cpp
        compile_example/main.cpp
        syntax/main.cpp
)
