
cmake_minimum_required(VERSION 3.29.6)
project(01_TwoSum)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(01_TwoSum
    Example.h
    Run.h
    Run.cpp
    Solution.h
    Solution.cpp
)

target_compile_options(01_TwoSum PRIVATE)