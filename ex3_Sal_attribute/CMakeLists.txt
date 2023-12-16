cmake_minimum_required(VERSION 3.24)
include( ${CMAKE_SOURCE_DIR}/utils.cmake ) # custom print_message() function.

set( CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE ) # close DEPRECATION WARNING...
set( CMAKE_CXX_STANDARD 20 ) # Cpp compiler version
set( NAME ex3_Sal_attribute )
set( SOURCE_FILES
        main.cpp
        Mk/SymNo32/SymNo32.cpp
        )

project( ${NAME} ) # set project name

# https://stackoverflow.com/questions/2368811/how-to-set-warning-level-in-cmake
print_message(STATUS "Compiler: ${CMAKE_CXX_COMPILER_ID}")
if (MSVC)
    if (CMAKE_CXX_FLAGS MATCHES "/W[0-4]") # Force to always compile with W4
        string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    else()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
    endif()
elseif (CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX) # Update if necessary
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wextra -Wall -Wno-long-long")
endif()

add_executable( ${NAME} ${SOURCE_FILES} )

# Set cmake to add define variable to specific target.
target_compile_definitions( ${NAME} PRIVATE PROJECT_ROOT_DIR="${CMAKE_SOURCE_DIR}" )
include_directories( SYSTEM ${CMAKE_SOURCE_DIR} )

