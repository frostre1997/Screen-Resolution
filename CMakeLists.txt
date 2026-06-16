cmake_minimum_required(VERSION 3.24)

# Se siamo su GitHub Actions, l'SDK è già pronto sul server. Lo carichiamo da lì.
if(NOT DEFINED GEODE_SDK)
    if(DEFINED ENV{GEODE_SDK})
        set(GEODE_SDK $ENV{GEODE_SDK})
    endif()
endif()

if(NOT DEFINED GEODE_SDK)
    include(FetchContent)
    FetchContent_Declare(
        GeodeMod
        GIT_REPOSITORY https://github.com/geode-sdk/cmake.git
        GIT_TAG main
    )
    FetchContent_MakeAvailable(GeodeMod)
else()
    list(APPEND CMAKE_MODULE_PATH "${GEODE_SDK}/cmake")
    include(GeodeMod)
endif()

# Definisce il progetto della mod
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Inizializza la mod
setup_geode_mod(screen_resolution)

# Indica il file sorgente principale C++
target_sources(screen_resolution PRIVATE src/main.cpp)

# Gestisce le dipendenze dal tuo mod.json
setup_geode_mod_dependencies(screen_resolution)
