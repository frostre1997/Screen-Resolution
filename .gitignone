cmake_minimum_required(VERSION 3.24)

# Set up the Geode CMake framework
include(FetchContent)
FetchContent_Declare(
    GeodeMod
    GIT_REPOSITORY https://github.com/geode-sdk/cmake.git
    GIT_TAG v3.0.0-beta.1
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
