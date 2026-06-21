#!/usr/bin/env bash
set -e
mkdir -p build_manual
for file in $(find . -name "*.cpp" | sort); do
    name=$(echo "$file" | sed 's#^./##; s#/#_#g; s#.cpp$##')
    echo "Compiling $file -> build_manual/$name"
    g++ -std=c++17 -Wall -Wextra -pedantic "$file" -o "build_manual/$name"
done
echo "All files compiled successfully."
