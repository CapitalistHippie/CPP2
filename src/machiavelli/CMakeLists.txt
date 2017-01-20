cmake_minimum_required(VERSION 3.2)

# Constants
set(PROJECT_NAME "Machiavelli executable")
set(PROJECT_VERSION 0.0.1)
set(TARGET_NAME "machiavelli")

# Project
project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} LANGUAGES CXX)

# Source files
set(SOURCE_FILES
	"src/main.cpp"
	"src/main.h")

# Binaries
add_executable(${TARGET_NAME} ${SOURCE_FILES})

# Compiler requirements.
target_compile_features(${TARGET_NAME}
	PRIVATE "cxx_range_for")

# Dependencies
# utils
target_link_libraries(${TARGET_NAME} "utils")
