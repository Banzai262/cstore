
cmake_minimum_required(VERSION 3.20)

project(cstore VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_C_FLAGS_DEBUG "-g -O0 -fsanitize=address,undefined")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "-fsanitize=address,undefined")

add_executable(cstore src/main.c)

target_compile_options(cstore PRIVATE
        -Wall
        -Wextra
        -Werror
        -g
        -O0
        -fsanitize=address,undefined
)

target_link_options(cstore PRIVATE
        -fsanitize=address,undefined
)
