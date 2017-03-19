cmake_minimum_required(VERSION 3.2)

################################################################################
## Constants
################################################################################
set(MACHIA_PROJECT_NAME		"Machiavelli")
set(MACHIA_PROJECT_VERSION	0.0.1)
# This constant should already be set one cmakelists.txt up.
# set(MACHIA_SRC_DIR			${CMAKE_CURRENT_LIST_DIR})
set(MACHIA_LIB_DIR			"${MACHIA_SRC_DIR}/lib")

set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}
    "${MACHIA_SRC_DIR}/../cmake/modules")


################################################################################
## Project
################################################################################
project(${MACHIA_PROJECT_NAME}
		VERSION ${MACHIA_PROJECT_VERSION}
		LANGUAGES CXX)


################################################################################
## 3rd party libraries
################################################################################
# School telnet library.
set(MACHIA_LIB_TELNET_TARGET_NAME	"telnet")
set(MACHIA_LIB_TELNET_DIR			"${MACHIA_LIB_DIR}/telnet")
set(MACHIA_LIB_TELNET_SRC_DIR		"${MACHIA_LIB_DIR}/telnet")
set(MACHIA_LIB_TELNET_INCLUDE_DIR	"${MACHIA_LIB_DIR}/telnet")

set(MACHIA_LIB_TELNET_SRC_FILES
	"${MACHIA_LIB_TELNET_SRC_DIR}/circularbuffer.h"
	"${MACHIA_LIB_TELNET_SRC_DIR}/clientcommand.h"
	"${MACHIA_LIB_TELNET_SRC_DIR}/clientinfo.h"
	"${MACHIA_LIB_TELNET_SRC_DIR}/socket.cpp"
	"${MACHIA_LIB_TELNET_SRC_DIR}/socket.h"
	"${MACHIA_LIB_TELNET_SRC_DIR}/sync_queue.h"
	"${MACHIA_LIB_TELNET_SRC_DIR}/throw.cpp"
	"${MACHIA_LIB_TELNET_SRC_DIR}/throw.h")

add_library(${MACHIA_LIB_TELNET_TARGET_NAME} STATIC
			${MACHIA_LIB_TELNET_SRC_FILES})

target_include_directories(${MACHIA_LIB_TELNET_TARGET_NAME}
						   PUBLIC ${MACHIA_LIB_TELNET_INCLUDE_DIR})

target_compile_definitions(${MACHIA_LIB_TELNET_TARGET_NAME}
						   PUBLIC "WIN32_LEAN_AND_MEAN")
						   
# Enable C++11.
set_property(TARGET ${MACHIA_LIB_TELNET_TARGET_NAME} PROPERTY CXX_STANDARD 11)


################################################################################
## 1st party libraries
################################################################################
add_subdirectory("utils")
add_subdirectory("netw")


################################################################################
## Executables
################################################################################
add_subdirectory("client")
add_subdirectory("server")
