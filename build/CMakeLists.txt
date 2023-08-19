cmake_minimum_required(VERSION 3.22.1)

# set project name
project(ex2)

# add include dir
include_directories(
    ../proc1/module
    ../proc2/module)

# add src file, need to test with another directory forms
file(GLOB M_PROC1 
    "../proc1/*/*.c")

file(GLOB M_PROC2 
    "../proc2/*/*.c")


# add shared lib 
add_library(proc1_lib ${M_PROC1})
add_library(proc2_lib ${M_PROC2})

add_executable(ex2_proc1 ../proc1/main_proc1.c)
add_executable(ex2_proc2 ../proc2/main_proc2.c)

# link lib and exec file
target_link_libraries(ex2_proc2 proc2_lib)
target_link_libraries(ex2_proc1 proc1_lib)