#!/bin/bash

# Stop on first error
set -e

# Navigate to the script's directory to ensure paths are correct
cd "$(dirname "$0")"

# Create build directory if it doesn't exist, then enter it
mkdir -p build
cd build

# Configure and build the project
cmake ..
cmake --build .

# Run the executable
./funner
