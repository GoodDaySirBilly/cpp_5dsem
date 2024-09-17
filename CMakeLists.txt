cmake_minimum_required(VERSION 3.3)


project(cmakeproject)

add_executable(main
src/main.cpp
src/Car.cpp
src/Bus.cpp
src/Bike.cpp
src/Garage.cpp
src/Transport.h
    )