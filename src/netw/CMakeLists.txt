cmake_minimum_required(VERSION 3.2)

################################################################################
## Constants
################################################################################
set(MACHIA_NETW_PROJECT_NAME	"Networking")
set(MACHIA_NETW_PROJECT_VERSION	0.0.1)

# This variable is set twice because when PARENT_SCOPE is set the variable is
# not available locally.
set(MACHIA_NETW_TARGET_NAME		"netw")
set(MACHIA_NETW_TARGET_NAME		"netw" PARENT_SCOPE)

set(MACHIA_NETW_DIR				${CMAKE_CURRENT_LIST_DIR})
set(MACHIA_NETW_SRC_DIR			"${CMAKE_CURRENT_LIST_DIR}/src")
set(MACHIA_NETW_INCLUDE_DIR		"${CMAKE_CURRENT_LIST_DIR}/include")


################################################################################
## Project
################################################################################
project(${MACHIA_NETW_PROJECT_NAME}
		VERSION ${MACHIA_NETW_PROJECT_VERSION}
		LANGUAGES CXX)

# Source files
set(MACHIA_NETW_SRC_FILES
	"${MACHIA_NETW_INCLUDE_DIR}/netw/tcp/server.h"
	"${MACHIA_NETW_INCLUDE_DIR}/netw/telnet/client.h"
	"${MACHIA_NETW_INCLUDE_DIR}/netw/telnet/server.h"
	"${MACHIA_NETW_INCLUDE_DIR}/netw/telnet/serverclient.h"
	"${MACHIA_NETW_SRC_DIR}/netw/tcp/server.cpp"
	"${MACHIA_NETW_SRC_DIR}/netw/telnet/client.cpp"
	"${MACHIA_NETW_SRC_DIR}/netw/telnet/server.cpp"
	"${MACHIA_NETW_SRC_DIR}/netw/telnet/serverclient.cpp")

# Binaries
add_library(${MACHIA_NETW_TARGET_NAME} STATIC
			${MACHIA_NETW_SRC_FILES})

# Enable C++11.
set_property(TARGET ${MACHIA_NETW_TARGET_NAME} PROPERTY CXX_STANDARD 11)

# Include directory
target_include_directories(${MACHIA_NETW_TARGET_NAME}
						   PUBLIC ${MACHIA_NETW_INCLUDE_DIR})

# Dependencies
target_link_libraries(${MACHIA_NETW_TARGET_NAME}
					  ${MACHIA_UTILS_TARGET_NAME}
					  ${MACHIA_LIB_TELNET_TARGET_NAME})
