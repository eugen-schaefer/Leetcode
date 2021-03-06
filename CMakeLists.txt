cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(Leetcode)

# Download and unpack googletest at configure time
# (see https://github.com/google/googletest/blob/master/googletest/README.md#incorporating-into-an-existing-cmake-project)
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)

execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()

execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Add googletest directly to our build. This defines the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                 ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)

add_executable(main main.cpp)
add_subdirectory(ReverseInteger)
add_subdirectory(TwoSum)
add_subdirectory(PalindromeNumber)
add_subdirectory(RomanToInteger)
add_subdirectory(LongestCommonPrefix)
add_subdirectory(ValidParentheses)