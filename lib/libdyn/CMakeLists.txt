# Request the minimum version of CMake, in case of lower version throws error
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Define your project:
project(
	"DynamiCLib"
	VERSION 1.0.0
	DESCRIPTION "Template of dynamic library CMake config"
	LANGUAGES C
)

# Define the C standard
set(CMAKE_C_STANDARD 17)

# Include the 'include' directory, where the headers are located
include_directories(include)

# Add the 'src' directory, where the sources files are located
file(GLOB_RECURSE SOURCES "src/*.c")


# Instead of executable create a shared library
add_library(${PROJECT_NAME} SHARED ${SOURCES})

