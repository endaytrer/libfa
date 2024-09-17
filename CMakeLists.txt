cmake_minimum_required(VERSION 3.27)
project(fa C)

set(CMAKE_C_STANDARD 11)


find_package(libxml2)

include_directories(include)

add_library(fa SHARED fa.c hash.c memory.c ref.c)

target_include_directories(fa PRIVATE ${libxml2})
target_link_libraries(fa ${libxml2})