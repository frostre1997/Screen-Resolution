cmake_minimum_required(VERSION 3.24)

# Scarica il framework CMake di Geode usando la branch corretta (master)
include(FetchContent)
FetchContent_Declare(
    GeodeMod
    GIT_REPOSITORY https://github.com/geode-sdk/cmake.git
    GIT_TAG master
)
FetchContent_MakeAvailable(GeodeMod)

# Definisce il progetto con il nome della mod
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Inizializza la mod
setup_geode_mod(screen_resolution)

# Indica il file sorgente principale in C++
target_sources(screen_resolution PRIVATE src/main.cpp)

# Gestisce le dipendenze leggendo dal tuo mod.json
setup_geode_mod_dependencies(screen_resolution)
