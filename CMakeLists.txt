cmake_minimum_required(VERSION 3.24)

# Definisce il progetto della mod
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Forza CMake a cercare Geode nella cartella creata da GitHub Actions
if(DEFINED ENV{GEODE_SDK})
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")
endif()

# Trova l'SDK ufficiale di Geode preinstallato nel server
find_package(Geode REQUIRED)

# Inizializza la mod
setup_geode_mod(screen_resolution)

# Indica il file sorgente principale C++
target_sources(screen_resolution PRIVATE src/main.cpp)

# Gestisce le dipendenze leggendo dal tuo mod.json
setup_geode_mod_dependencies(screen_resolution)
