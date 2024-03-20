cmake_minimum_required(VERSION 3.20)

project (cmake_cpp
	VERSION 0.1
	DESCRIPTION "CMake demo")

# This project will output an executable file
add_executable(app "")

add_subdirectory(src)

