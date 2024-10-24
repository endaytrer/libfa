cmake_minimum_required(VERSION 3.21)
project(fa C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_library(fa SHARED fa.c hash.c memory.c ref.c
        include/fa.h include/hash.h include/internal.h include/list.h include/memory.h include/ref.h)

set_target_properties(fa PROPERTIES PUBLIC_HEADER include/fa.h)

add_executable(fa_test fa_test.c)

target_link_libraries(fa_test PRIVATE fa)

install(TARGETS fa PUBLIC_HEADER)
