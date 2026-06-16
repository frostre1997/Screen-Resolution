cmake_minimum_required(VERSION 3.24)

# Definisce il progetto della mod
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Scarica il framework ufficiale usando il branch corretto (main)
include(FetchContent)
FetchContent_Declare(
    GeodeMod
    GIT_REPOSITORY https://github.com/geode-sdk/geode.git
    GIT_TAG main
    SOURCE_SUBDIR loader
)
FetchContent_MakeAvailable(GeodeMod)

# Inizializza la mod
setup_geode_mod(screen_resolution)

# Indica il file sorgente principale C++
target_sources(screen_resolution PRIVATE src/main.cpp)

# Gestisce le dipendenze dal tuo mod.json
setup_geode_mod_dependencies(screen_resolution)
