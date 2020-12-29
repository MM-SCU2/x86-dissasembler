cmake_minimum_required(VERSION 3.5)
project(x86-disassembler)

# Algunos flags para pasar al compilador (gnu++11 en vez de c++11 para que sea cross-plat)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu++11 -ggdb3 -g")


# Leemos todos los archivos fuentes en ./src
file(GLOB SOURCE_FILES src/*.c src/*.h)

add_executable( disassm ${SOURCE_FILES} build/obj/)

