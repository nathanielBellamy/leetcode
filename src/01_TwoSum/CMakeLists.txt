
cmake_minimum_required(VERSION 3.29.6)
project(01_TwoSum)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(01_TwoSum
    Example.h
    Examples.h
    Run.h
    Run.cpp
    Solutions/Solution.h
    Solutions/First.h
    Solutions/First.cpp
    Solutions/Optimized.h
    Solutions/Optimized.cpp
)

target_compile_options(01_TwoSum PRIVATE)