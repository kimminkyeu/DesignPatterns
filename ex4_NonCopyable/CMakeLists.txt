cmake_minimum_required(VERSION 3.24)
set( CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE ) # close DEPRECATION WARNING...
set( CMAKE_CXX_STANDARD 20 ) # Cpp compiler version
set( NAME ex4_NonCopyable )
set( SOURCE_FILES
        main.cpp
        )

project( ${NAME} ) # set project name
add_executable( ${NAME} ${SOURCE_FILES} )

# Set cmake to add define variable to specific target.
target_compile_definitions( ${NAME} PRIVATE PROJECT_ROOT_DIR="${CMAKE_SOURCE_DIR}" )