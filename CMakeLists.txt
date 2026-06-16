cmake_minimum_required(VERSION 3.24)

project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Cerca Geode nel server di GitHub
find_package(Geode REQUIRED)

setup_geode_mod(screen_resolution)

target_sources(screen_resolution PRIVATE src/main.cpp)

setup_geode_mod_dependencies(screen_resolution)
