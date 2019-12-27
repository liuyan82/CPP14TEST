cmake_minimum_required(VERSION 3.10)

project(cpp14 VERSION 0.1)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CXX_FLAGS "-fno-elide-constructors")
add_definitions(${CXX_FLAGS})

add_subdirectory(rval)
add_subdirectory(std_begin_end)
add_subdirectory(std_async)

