# cmake_c_cpp

# Ex1: helloworld:
├── CMakeLists.txt
|__ main.cpp

# to build run commands:
- cmake .
- make
- ./project_name

to optimise files, use this folder structure
├── build
|    └──CMakeLists.txt
|__ main.cpp



# Ex2: cmake with many folders:
├── build
├── CMakeLists.txt
├── include
│   └── Student.h
└── src
    ├── mainapp.cpp
    └── Student.cpp

# Ex3: cmake create 2 runfiles:
├── build
|   └──CMakeLists.txt
├── proc1
|   ├── main_proc1.c `run file 1`
|   ├── proc1.c
│   └── proc1.h
└── proc2
    ├── main_proc2.c `run file 2`
    ├── proc2.c
    └── proc2.h