
cmake_minimum_required(VERSION 3.29.6)
project(06_ZigZagConversion)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(benchmark REQUIRED) # google benchmark

add_library(06_ZigZagConversion
        Benchmark.h
        Example.h
        Examples.h
        Run.h
        Run.cpp
        Solutions/Solution.h
        Solutions/First.h
        Solutions/First.cpp
)

target_link_libraries(06_ZigZagConversion
        PUBLIC
        benchmark::benchmark
)
target_compile_options(06_ZigZagConversion PRIVATE)
