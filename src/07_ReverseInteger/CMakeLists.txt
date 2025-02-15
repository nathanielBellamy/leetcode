
cmake_minimum_required(VERSION 3.29.6)
project(07_ReverseInteger)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(benchmark REQUIRED) # google benchmark

add_library(07_ReverseInteger
        Benchmark.h
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

target_link_libraries(07_ReverseInteger
        PUBLIC
        benchmark::benchmark
)
target_compile_options(07_ReverseInteger PRIVATE)
