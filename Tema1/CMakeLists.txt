cmake_minimum_required(VERSION 3.0)

set(myproject "mutations")
# Project name
project(${myproject})

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()

add_subdirectory(src)

add_executable(${myproject} src/main.cpp)

target_link_libraries(${myproject} PUBLIC src)

target_include_directories(${myproject} PUBLIC "${PROJECT_SOURCE_DIR}/src")