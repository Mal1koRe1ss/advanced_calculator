sudo tee ./CMakeLists.txt << EOF

cmake_minimum_required(VERSION 3.10)
project(AdvancedCalculator C)

# Compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

# Sources
set(SOURCES
    main.c
    include/calculations.c
    include/area_calculations.c
    include/angle_calculations.c
)

# Executable
add_executable(main ${SOURCES})

# Link for libraries
target_link_libraries(main m)
EOF

mkdir build
cd build
cmake ..
make