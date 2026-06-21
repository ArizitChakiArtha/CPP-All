# Basic to Pro C++ Code Repository

This repository is designed for learning C++ step by step. Each topic has a separate `.cpp` file with a complete `main()` function, so you can compile and run each file independently.

## Requirements

- C++ compiler: `g++`, `clang++`, or MSVC
- Recommended standard: C++17

## Quick Run

Example:

```bash
g++ -std=c++17 01_basics/01_hello_world.cpp -o hello
./hello
```

On Windows PowerShell:

```powershell
g++ -std=c++17 01_basics/01_hello_world.cpp -o hello.exe
.\hello.exe
```

## Build Everything with CMake

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

Each `.cpp` file becomes a separate executable.

## Folder Roadmap

1. `01_basics` - input/output, variables, conditions, loops
2. `02_functions_arrays_strings` - functions, arrays, vectors, strings, recursion
3. `03_pointers_memory` - pointers, references, dynamic memory, smart pointers
4. `04_oop` - classes, constructors, inheritance, polymorphism, operator overloading
5. `05_stl` - vector, map, set, stack, queue, priority queue, algorithms
6. `06_dsa` - searching, sorting, linked list, stack, queue, trees, graphs
7. `07_modern_cpp` - lambdas, auto, range-for, optional, variant, move semantics
8. `08_advanced` - templates, exceptions, file handling, threads, RAII, design patterns
9. `09_projects` - small complete projects

## Suggested Learning Order

Start from `01_basics`, run each file, edit the code, and try small changes. After completing basics, move to STL and DSA. Finally, study modern and advanced C++ topics.
