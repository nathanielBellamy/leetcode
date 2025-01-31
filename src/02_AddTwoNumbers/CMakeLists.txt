
cmake_minimum_required(VERSION 3.29.6)
project(02_AddTwoNumbers)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(benchmark REQUIRED) # google benchmark

add_library(02_AddTwoNumbers
        # BenchmarkAddTwoNumbers.h
        Example.h
        Examples.h
        ListNode.h
        Run.h
        Run.cpp
        Solutions/Solution.h
        Solutions/First.h
        Solutions/First.cpp
)

target_link_libraries(02_AddTwoNumbers
        PUBLIC
        benchmark::benchmark
)
target_compile_options(02_AddTwoNumbers PRIVATE)
