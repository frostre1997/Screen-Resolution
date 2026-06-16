cmake_minimum_required(VERSION 3.24)

# Sostituisci "screen_resolution" con l'ID o il nome della tua mod se necessario
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# QUESTO È IL COMANDO MAGICO: Trova l'SDK preinstallato da GitHub Actions
find_package(Geode REQUIRED)

# Inizializza la mod usando i componenti appena trovati
setup_geode_mod(screen_resolution)

# Indica il file sorgente principale C++
target_sources(screen_resolution PRIVATE src/main.cpp)

# Gestisce le dipendenze leggendo direttamente dal tuo mod.json
setup_geode_mod_dependencies(screen_resolution)
