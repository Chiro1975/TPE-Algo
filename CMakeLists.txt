cmake_minimum_required(VERSION 3.6)
project(analisisEPH)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

set(SOURCE_FILES main.cpp
        ejercicios.cpp
        Funciones_TPI.cpp
        ejercicios.h
        definiciones.h
        test/porcHogaresNoPropMiemMay3TEST.cpp
        test/crecimientoHogarenoVsIngresosTEST.cpp
        test/esEncuestaValidaTEST.cpp
        test/generoGPosiblesClientesTEST.cpp
        test/mayorIngresoPorPersonaActivaTEST.cpp
        test/nivelEducativoXHogarTEST.cpp
        test/ordenarPorITFTEST.cpp)

add_executable(analisisEPH ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS "-g --coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(analisisEPH gtest gtest_main)
