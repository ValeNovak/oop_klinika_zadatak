cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Collect all source files explicitly
set(SOURCES
    main.cpp
    Datum.cpp
    Doktor.cpp
    Klinika.cpp
    Osoba.cpp
    Pacijent.cpp
    Racun.cpp
    Recepcija.cpp
    Sex.cpp
    Status_termina.cpp
    Termin.cpp
    Usluga.cpp
    Vremenska_oznaka.cpp
)

# Add the executable
add_executable(klinika ${SOURCES})

