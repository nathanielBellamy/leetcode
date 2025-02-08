
cmake_minimum_required(VERSION 3.29.6)
project(04_MedianOfTwoSortedArrays)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(benchmark REQUIRED) # google benchmark

add_library(04_MedianOfTwoSortedArrays
        Benchmark.h
        Example.h
        Examples.h
        Run.h
        Run.cpp
        Solutions/Solution.h
        Solutions/First.h
        Solutions/First.cpp
)

target_link_libraries(04_MedianOfTwoSortedArrays
        PUBLIC
        benchmark::benchmark
)
target_compile_options(04_MedianOfTwoSortedArrays PRIVATE)
