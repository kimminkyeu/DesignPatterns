cmake_minimum_required(VERSION 3.24)
set( CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE ) # close DEPRECATION WARNING...
set( CMAKE_CXX_STANDARD 20 ) # Cpp compiler version

set( NAME ex1_assertion )
set( SOURCE_FILES
        main.cpp
        )

project( ${NAME} ) # set project name
add_executable( ${NAME} ${SOURCE_FILES} )
