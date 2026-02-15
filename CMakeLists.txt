cmake_minimum_required(VERSION 4.1)
project(autonumos_machine_swarm_manager)

set(CMAKE_CXX_STANDARD 20)

add_executable(autonumos_machine_swarm_manager main.cpp
        machine.h
)
