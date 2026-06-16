cmake_minimum_required(VERSION 3.24)
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Indichiamo a CMake di guardare nelle variabili d'ambiente di Geode se non trova il pacchetto
if(NOT Geode_DIR AND DEFINED ENV{GEODE_SDK})
    set(Geode_DIR "$ENV{GEODE_SDK}/build" CACHE PATH "Path to Geode Config")
endif()

find_package(Geode REQUIRED)

setup_geode_mod(screen_resolution)

target_sources(screen_resolution PRIVATE src/main.cpp)

setup_geode_mod_dependencies(screen_resolution)
