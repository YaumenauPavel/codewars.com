cmake_minimum_required(VERSION 3.20)
project(codewars.com)

include(GTest/GTest.cmake)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -O2")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -O2")

add_subdirectory("Reverse Words")
add_subdirectory("Factorial")
add_subdirectory("Unique In Order")
add_subdirectory("Complementary DNA")
add_subdirectory("Sum of odd numbers")
add_subdirectory("Reduce but Grow")
add_subdirectory("Kolakoski Sequence")
add_subdirectory("Split Strings")