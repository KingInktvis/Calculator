cmake_minimum_required(VERSION 3.9)
project(calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(calculator main.cpp Calculator.cpp Calculator.h)