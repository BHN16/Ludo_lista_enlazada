cmake_minimum_required(VERSION 3.10)
project(practca_sfml)

set(CMAKE_CXX_STANDARD 14)

add_executable(practca_sfml main.cpp Juego.cpp Juego.h Dado.cpp Dado.h Tablero.cpp Tablero.h Casilla.cpp Casilla.h Jugador.cpp Jugador.h Ficha.cpp Ficha.h Nodo.cpp Nodo.h Recorrido.cpp Recorrido.h)

set(SFML_INCLUDE_DIR "/home/bhn16/Descargas/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "/home/bhn16/Descargas/SFML-2.5.1/lib")
set(SFML_DIR "/home/bhn16/Descargas/SFML-2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

target_link_libraries (practca_sfml sfml-graphics sfml-window sfml-system)