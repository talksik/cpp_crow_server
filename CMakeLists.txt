cmake_minimum_required(VERSION 3.15)

project(HelloWorld)

# gstreamer-1.0
find_package(PkgConfig REQUIRED)

set(CMAKE_CXX_STANDARD 14)

set (source_dir "./src")
set (include_dir "./include")
file (GLOB source_files "${source_dir}/*.cpp")
file (GLOB header_files "${source_dir}/*.h")

add_executable(HelloWorld ${source_files})

target_include_directories(HelloWorld PUBLIC ${include_dir})
