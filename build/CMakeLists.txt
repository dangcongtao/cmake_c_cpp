cmake_minimum_required(VERSION 3.22.1)

# set project name
project(ex2)

# add include dir
include_directories(../include)

# add src file, need to test with another directory forms
file(GLOB SOURCES "../src/*.c")

# add shared lib 
add_library(ex2_lib ${SOURCES})

add_executable(ex2 ../main.c)

# link lib and exec file
target_link_libraries(ex2 ex2_lib)