cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

set(CMAKE_LEGACY_CYGWIN_WIN32 0)

# Force C++11
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

project(Freezer)

enable_testing()

set (Freezer_VERSION_MAJOR 1)
set (Freezer_VERSION_MINOR 0)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(warnings "-Wall -Wextra") #-Werror
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set(warnings "/W4 /WX /EHsc")
endif()

if (NOT CONFIGURED_ONCE)
    set(CMAKE_CXX_FLAGS "${warnings}"
        CACHE STRING "Flags used by the compiler during all build types." FORCE)
    set(CMAKE_C_FLAGS   "${warnings}"
        CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()


if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(compilation "-O2 -g")
endif()

set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} ${warnings} ${compilation}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${warnings} ${compilation}")


# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/FreezerConfig.h.in"
  "${PROJECT_BINARY_DIR}/FreezerConfig.h"
  )
  
# add the binary tree to the search path for include files
include_directories("${PROJECT_BINARY_DIR}")

find_package(Qt5Widgets)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set (PROJECT_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR})


#add_subdirectory(${PROJECT_SOURCE_DIR}/connection)


#add_library(ConnectionManager STATIC ${PROJECT_SOURCE_DIR}/main.cpp)



set(CONFIGURED_ONCE TRUE CACHE INTERNAL
    "A flag showing that CMake has configured at least once.")




