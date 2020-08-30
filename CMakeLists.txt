cmake_minimum_required(VERSION 3.16)
project(Leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(Leetcode main.cpp TwoSum/Solution_TwoSum.h TwoSum/Execute_TwoSum.cpp TwoSum/Execute_TwoSum.h ReverseInteger/Solution_ReverseInteger.h)