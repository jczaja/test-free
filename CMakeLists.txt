cmake_minimum_required(VERSION 2.8)
project(test-free)

include(CheckCXXCompilerFlag)

if(UNIX)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
add_definitions(-std=c++11)
elseif(COMPILER_SUPPORTS_CXX0X)
add_definitions(-std=c++0x)
endif()
endif()

add_definitions(-fno-omit-frame-pointer)



add_executable(test-free main.cpp ) 
