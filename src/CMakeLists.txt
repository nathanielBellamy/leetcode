cmake_minimum_required(VERSION 3.29.6)
project(NSLeetCode VERSION 0.0.0)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(
        /Users/ns/code/leetcode/src/01_TwoSum
)

add_executable(NSLeetCode
        Main.h
        Main.cpp
)

target_link_libraries(NSLeetCode
    PUBLIC
    01_TwoSum
)
set_target_properties(NSLeetCode PROPERTIES LINKER_LANGUAGE CXX)

