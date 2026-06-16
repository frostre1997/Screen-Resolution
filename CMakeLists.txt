cmake_minimum_required(VERSION 3.24)

# Definisce il progetto con il nome della mod
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Inizializza la mod (Geode compilerà tutto il necessario in automatico)
setup_geode_mod(screen_resolution)

# Indica il file sorgente principale in C++
target_sources(screen_resolution PRIVATE src/main.cpp)

# Gestisce le dipendenze leggendo direttamente dal tuo mod.json
setup_geode_mod_dependencies(screen_resolution)
