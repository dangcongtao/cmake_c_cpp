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
