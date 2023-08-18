cmake_minimum_required(VERSION 3.22.1)

# set project name
project(ex2)

# add include dir
include_directories(../include)

# add src file, need to test with another directory forms
file(GLOB SOURCES "../src/*.c")

# add exect file
add_executable(ex2 ${SOURCES})