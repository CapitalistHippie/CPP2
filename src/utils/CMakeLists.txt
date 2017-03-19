cmake_minimum_required(VERSION 3.2)

################################################################################
## Constants
################################################################################
set(MACHIA_UTILS_PROJECT_NAME		"Utilities")
set(MACHIA_UTILS_PROJECT_VERSION	0.0.1)

# This variable is set twice because when PARENT_SCOPE is set the variable is
# not available locally.
set(MACHIA_UTILS_TARGET_NAME		"utils")
set(MACHIA_UTILS_TARGET_NAME		"utils" PARENT_SCOPE)

set(MACHIA_UTILS_DIR				${CMAKE_CURRENT_LIST_DIR})
set(MACHIA_UTILS_SRC_DIR			"${CMAKE_CURRENT_LIST_DIR}/src")
set(MACHIA_UTILS_INCLUDE_DIR		"${CMAKE_CURRENT_LIST_DIR}/include")


################################################################################
## Project
################################################################################
project(${MACHIA_UTILS_PROJECT_NAME}
		VERSION ${MACHIA_UTILS_PROJECT_VERSION}
		LANGUAGES CXX)

# Source files
set(MACHIA_UTILS_SRC_FILES
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/cmd/command.hpp"
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/cmd/commandhandler.hpp"
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/cmd/error.h"
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/cmd/errorcategory.h"
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/definitions.h"
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/memleakdetection.h"
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/noncopyable.h"
	"${MACHIA_UTILS_INCLUDE_DIR}/utils/platformdefinitions.h"
	"${MACHIA_UTILS_SRC_DIR}/utils/cmd/errorcategory.cpp"
	"${MACHIA_UTILS_SRC_DIR}/utils/memleakdetection.cpp")

# Binaries
add_library(${MACHIA_UTILS_TARGET_NAME} STATIC
			${MACHIA_UTILS_SRC_FILES})

# Enable C++11.
set_property(TARGET ${MACHIA_UTILS_TARGET_NAME} PROPERTY CXX_STANDARD 11)

# Include directory
target_include_directories(${MACHIA_UTILS_TARGET_NAME}
						   PUBLIC ${MACHIA_UTILS_INCLUDE_DIR})
