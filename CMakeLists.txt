# Minimum required CMake version
cmake_minimum_required(VERSION 3.16)

# Project name and language
project(Calculator LANGUAGES CXX)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app main.cpp)            # first program (pipeline uses this)
add_executable(calc_tool calculator.cpp) # second program

# Collect all .cpp files in this directory automatically
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS *.cpp)

# Define the output executable
add_executable(calculator ${SRC_FILES})

# Optional: include headers if you have an 'include' folder
if(EXISTS "${CMAKE_SOURCE_DIR}/include")
    target_include_directories(calculator PRIVATE include)
endif()

# Optional: enable warnings for safer builds
if(MSVC)
    target_compile_options(calculator PRIVATE /W4 /permissive-)
else()
    target_compile_options(calculator PRIVATE -Wall -Wextra -Wpedantic)
endif() 
