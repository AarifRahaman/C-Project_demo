cmake_minimum_required(VERSION 3.16)
project(c_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build the CI binary from calculator.cpp (which contains main())
add_executable(app
    calculator.cpp
)

# IMPORTANT: do NOT add main.cpp anywhere.
# Make sure there is NO other add_executable(...calculator...) target.
