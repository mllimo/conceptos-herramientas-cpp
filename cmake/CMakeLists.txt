cmake_minimum_required(VERSION 3.1) # Versión de CMAKE

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)      # Para cambiar la ruta del target
set(CMAKE_GENERATOR "Unix Makefiles" CACHE INTERNAL "" FORCE)    # Te generara un archivo makefile

# Le asignamos un nombre al proyecto
project(cmake-test)

# Configuración de compilación
set(CMAKE_CXX_STANDARD 17)                                                                      # Versión que usaremos del lenguaje
set(CMAKE_CXX_FLAGS_DEBUG "-fsanitize=address -pedantic-errors -Wall -Wextra -DDEBUG -ggdb")   # Flags de compilación para modo debug
set(CMAKE_CXX_FLAGS_RELEASE "-Wall")                                                            # Flags para versión fuera de producción

# Source code
include_directories("src/")

set(SrcPoint 
  "src/point2d.cc"
  "src/main_point.cc"
)

set(SrcComplejo
  "complejo/src/*.cc"
)

add_executable(point_program ${SrcPoint})
add_executable(complejo ${SrcComplejo})

