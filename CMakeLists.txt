cmake_minimum_required(VERSION 3.24)

project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Forza CMake a cercare i file di configurazione dentro la directory dell'SDK scaricata da GitHub Actions
if(DEFINED ENV{GEODE_SDK})
    set(Geode_DIR "$ENV{GEODE_SDK}/build" CACHE PATH "Path to Geode Config")
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")
endif()

find_package(Geode REQUIRED)

setup_geode_mod(screen_resolution)

target_sources(screen_resolution PRIVATE src/main.cpp)

setup_geode_mod_dependencies(screen_resolution)

