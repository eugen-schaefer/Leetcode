# Setup according to https://google.github.io/googletest/quickstart-cmake.html#set-up-a-project

cmake_minimum_required(VERSION 3.14)
project(Leetcode)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(main main.cpp)
add_subdirectory(ReverseInteger)
add_subdirectory(TwoSum)
add_subdirectory(PalindromeNumber)
add_subdirectory(RomanToInteger)
add_subdirectory(LongestCommonPrefix)
