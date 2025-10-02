cmake_minimum_required(VERSION 4.0)
project(VehicleProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(VehicleProject
        Vehicle.h
        main.cpp
        Car.h
        Truck.h)
