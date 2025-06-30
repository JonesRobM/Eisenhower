# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.16)

# Name your project
project(eisenhower_matrix)

# Use C++17 standard (nlohmann/json works well with this)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake where to find our header files
include_directories(include)

# Create an executable for our test
add_executable(test_json src/cpp/test_json.cpp)

# Later, when you have more files, you can add them like this:
# add_executable(eisenhower_matrix 
#     src/cpp/main.cpp 
#     src/cpp/task.cpp 
#     src/cpp/eisenhower_matrix.cpp
# )