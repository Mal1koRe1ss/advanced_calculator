# Advanced Calculator in C
🚀 Powerful, lightweight, and cross-platform calculator for advanced mathematical operations written in pure C. Perfect for students, engineers, and math enthusiasts who need precise calculations without bloat.

## Key Features

* Advanced Calculations: Functions, quadratic equations, exponentials, trigonometry<br>
* Geometric Computations: Circle, trapezoid, rhombus, polygon, and triangle calculations<br>
* Angle Calculations: Triangle interior angle computations<br>
* Custom Settings: Choose between different π values (3 or 3.14)<br>
* Cross-Platform: Works seamlessly on Linux, Windows, and macOS<br>
* Lightweight: Minimal resource consumption - no dependencies needed<br>
* User-Friendly: Intuitive menu-driven interface with console clearing<br>

## Supported Operations

### Area Calculations

* Circle area (with customizable π)<br>
* Trapezoid area<br>
* Rhombus area (two different formulas)<br>
* Polygon properties (diagonals, interior angles)<br>
* Triangle area<br>
* Square area<br>

### Advanced Functions

* Custom f(x) function<br>
* Quadratic equations<br>
* Exponential functions<br>
* Trigonometric functions<br>
* Circle arc length calculation<br>

### Angle Calculations

* Triangle's missing angle calculation<br>

# Getting Started

### Prerequisites

**GCC compiler**

**Make build system or CMake**

## Building from Source

Clone the repo.
```bash
git clone https://github.com/yourusername/advanced_calculator.git
cd advanced_calculator
```


### Building with CMake
```bash
# Linux shell script
./cmake.sh

# Manually
mkdir build
cd build
cmake ..
make
./main
```

### Building with Makefile
```bash
make
```

### Building with Shell Script(Linux)
```bash
./compile.sh
```

### Building manually
```bash
gcc main.c include/calculations.c include/area_calculations.c include/angle_calculations.c -o main -lm
```

# ToDo

**New Calculations**<br>
**Multiple Languages(Turkish,Russian etc.)**<br>
**Functional Calculations**<br>
**Cleaner code**<br>