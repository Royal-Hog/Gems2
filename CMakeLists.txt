cmake_minimum_required(VERSION 3.20)
project(GEMS_main)

set(CMAKE_CXX_STANDARD 14)
set(host "x64")
set(CMAKE_VS_PLATFORM_TOOLSET_HOST_ARCHITECTURE "x64")
set(CMAKE_GENERATOR_TOOLSET "host=x64")
set (native_data_types_ARCHITECTURE "x64")
set(BUILD_ARCH "-m64")
set(CMAKE_C_FLAGS -m64)
set(CMAKE_CXX_FLAGS -m64)
include_directories(.)

add_executable(GEMS_main
        bomb.cpp
        bomb.h
        elem.cpp
        elem.h
        gametable.cpp
        gametable.h
        main.cpp
        pallete.h
        quad.cpp
        quad.h
        recolor.cpp
        recolor.h
        )
