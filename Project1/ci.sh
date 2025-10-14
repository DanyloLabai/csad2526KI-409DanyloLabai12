#!/bin/bash
set -e

# CI build script — run from repository root

# Create build directory and enter it
mkdir -p build
cd build

# Configure the project with CMake
cmake ..

# Build the project
cmake --build .

# Run tests using CTest and show failures
ctest --output-on-failure

echo "CI script completed successfully."