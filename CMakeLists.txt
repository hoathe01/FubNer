cmake_minimum_required(VERSION 3.10)

# set the project name
project(funner)

# add the executable
# Automatically find all source files
file(GLOB SOURCES "src/*.cpp")

# add the executable
add_executable(funner ${SOURCES})

target_include_directories(funner PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
