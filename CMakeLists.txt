cmake_minimum_required(VERSION 3.27)
project(fa C)

set(CMAKE_C_STANDARD 11)


find_package(libxml2)

include_directories(include)

add_library(fa SHARED fa.c hash.c memory.c ref.c
        include/fa.h include/hash.h include/internal.h include/list.h include/memory.h include/ref.h)

set_target_properties(fa PROPERTIES PUBLIC_HEADER include/fa.h)

target_include_directories(fa PRIVATE ${libxml2})
target_link_libraries(fa ${libxml2})


install(TARGETS fa PUBLIC_HEADER)