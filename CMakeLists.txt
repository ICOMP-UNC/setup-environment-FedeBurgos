# Request the minimum version of CMake, in case of lower version throws error
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Define your project:
project(
	"FirstProjectInCmake"
	VERSION 1.1.0
	DESCRIPTION "CMake C Project Template for OS II"
	LANGUAGES C
)

# Define the C standard
set(CMAKE_C_STANDARD 17)

# Include the 'include' directory, where the headers are located
include_directories(include)

# Add the 'src' directory, where the sources files are located
file(GLOB_RECURSE SOURCES "src/*.c")

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Compile the libraries
add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

# Include headers in lib
target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

# Link hte libraries
target_link_libraries(${PROJECT_NAME} StatiCLib DynamiCLib)

# # enable testing
# include(CTest)

# # module to fetch a repository
# include(FetchContent)

# set(UNITY_GIT_URL "https://github.com/ThrowTheSwitch/Unity.git")

# # enable debug
# set(FETCHCONTENT_QUIET OFF)

# FetchContent_Declare(
# 	Unity
# 	GIT_REPOSITORY ${UNITY_GIT_URL}
# 	SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity
# 	UPDATE_COMMAND "" # disable update command
# )

# # wait for repo ready
# FetchContent_MakeAvailable(Unity)

# # add tests
# if (RUN_TESTS EQUAL 1 OR RUN_COVERAGE EQUAL 1)
# 	add_subdirectory(tests)
# endif()

