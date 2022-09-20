cmake_minimum_required(VERSION 3.19)
project(alojamientogratuito)

set(CMAKE_CXX_STANDARD 14)

add_executable(alojamientogratuito Persona.cpp Persona.h Huesped.cpp Huesped.h Hogar.cpp Hogar.h Propietario.cpp Propietario.h Reserva.cpp Reserva.h Evaluacion.cpp Evaluacion.h Admin.cpp Admin.h Main.cpp)