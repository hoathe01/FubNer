cmake_minimum_required(VERSION 3.10)

# set the project name
project(funner)

# add the executable
add_executable(funner src/main.cpp src/fibonacci.cpp)

target_include_directories(funner PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
