cmake_minimum_required(VERSION 3.29.6)
project(NSLeetCode VERSION 0.0.0)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(benchmark REQUIRED) # google benchmark

set (BASE_DIR /Users/ns/code/leetcode/src)

add_subdirectory(
        ${BASE_DIR}/01_TwoSum
)
add_subdirectory(
        ${BASE_DIR}/02_AddTwoNumbers
)
add_subdirectory(
        ${BASE_DIR}/03_LongestSubstring
)
add_subdirectory(
        ${BASE_DIR}/04_MedianOfTwoSortedArrays
)
add_subdirectory(
        ${BASE_DIR}/05_LongestPalindrome
)
add_subdirectory(
        ${BASE_DIR}/06_ZigZagConversion
)

add_executable(NSLeetCode
        Main.h
        Main.cpp
)

target_link_libraries(NSLeetCode
    PUBLIC
    benchmark::benchmark
    01_TwoSum
    02_AddTwoNumbers
    03_LongestSubstring
    04_MedianOfTwoSortedArrays
    05_LongestPalindrome
    06_ZigZagConversion
)
set_target_properties(NSLeetCode PROPERTIES LINKER_LANGUAGE CXX)

