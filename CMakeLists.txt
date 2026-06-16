cmake_minimum_required(VERSION 3.24)

# Scarica il framework di Geode usando l'URL corretto (branch master)
include(FetchContent)
FetchContent_Declare(
    GeodeMod
    URL https://github.com/geode-sdk/cmake/archive/refs/heads/master.zip
)
FetchContent_MakeAvailable(GeodeMod)

# Definisce il progetto della mod
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Inizializza la mod
setup_geode_mod(screen_resolution)

# Indica il file sorgente principale C++
target_sources(screen_resolution PRIVATE src/main.cpp)

# Gestisce le dipendenze dal tuo mod.json
setup_geode_mod_dependencies(screen_resolution)
