
cmake_minimum_required(VERSION 3.29.6)
project(03_LongestSubstring)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(benchmark REQUIRED) # google benchmark

add_library(03_LongestSubstring
        BenchmarkLongestSubstring.h
        Example.h
        Examples.h
        Run.h
        Run.cpp
        Solutions/Solution.h
        Solutions/First.h
        Solutions/First.cpp
        Solutions/Second.h
        Solutions/Second.cpp
)

target_link_libraries(03_LongestSubstring
        PUBLIC
        benchmark::benchmark
)
target_compile_options(03_LongestSubstring PRIVATE)
