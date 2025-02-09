
cmake_minimum_required(VERSION 3.29.6)
project(05_LongestPalindrome)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(benchmark REQUIRED) # google benchmark

add_library(05_LongestPalindrome
        Benchmark.h
        Example.h
        Examples.h
        Run.h
        Run.cpp
        Solutions/Solution.h
        Solutions/First.h
        Solutions/First.cpp
)

target_link_libraries(05_LongestPalindrome
        PUBLIC
        benchmark::benchmark
)
target_compile_options(05_LongestPalindrome PRIVATE)
