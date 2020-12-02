# Leetcode
Here you will find possible solutions for some problems from [LeetCode](https://leetcode.com/problemset/all/)
The project is structured that way such that one directory on the project's top-level contains the
following files regarding the corresponding problem from leetcode.com:
 * Description of the problem in pdf format
 * CMakeLists.txt adding an executable for the test and linking them against gtest
 * Header file containing the solution class declaration and definition
 * test.cpp containing the test of the solution class

## Running code

### Dependencies for running locally
* cmake >= 3.16
* make >= 4.2.1
* gcc/g++ >= 9.3.0

### Basic build instructions for Linux
1. Clone the entire repo using HTTPS: ```git clone https://github.com/eugen-schaefer/Leetcode.git```
2. Make a build directory at the top level of the cloned repo and change into it: `mkdir build && cd build`
3. Compile: `make .. && make`
4. Run the test for the solution of interest from the build folder: `./<target name>/<target name>Test` whereas the target name is the name of the problem from https://leetcode.com/problemset/all/. E.g. if you like to run the test for the solution for the problem posted [here](https://leetcode.com/problems/reverse-integer/), execute `./ReverseInteger/ReverseIntegerTest` from the build directory.