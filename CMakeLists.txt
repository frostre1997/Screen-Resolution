cmake_minimum_required(VERSION 3.24)

# Set up the Geode CMake framework via direct ZIP download (bypasses Git auth bugs)
include(FetchContent)
FetchContent_Declare(
    GeodeMod
    URL https://github.com/geode-sdk/cmake/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(GeodeMod)

# Define your project metadata
project(screen_resolution VERSION 1.0.0 LANGUAGES CXX)

# Initialize the mod
setup_geode_mod(screen_resolution)

# Include your source files (main C++ code)
target_sources(screen_resolution PRIVATE src/main.cpp)

# Setup dependencies (matching your mod.json)
setup_geode_mod_dependencies(screen_resolution)
