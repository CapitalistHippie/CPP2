cmake_minimum_required(VERSION 3.2)

# Constants
set(PROJECT_NAME "Machiavelli")
set(PROJECT_VERSION 0.0.1)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../cmake/modules")

# Project
project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} LANGUAGES CXX)


#########################################
## 3rd party libraries
#########################################


#########################################
## 1st party libraries
#########################################
add_subdirectory("utils")


#########################################
## Executables
#########################################
add_subdirectory("machiavelli")
