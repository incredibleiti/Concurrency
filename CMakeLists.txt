# 1. Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# 2. Name your project
project(main)

# 3. Specify the C++ standard (C++11 is minimum for std::thread)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. Find the Threads package (important for cross-platform support)
find_package(Threads REQUIRED)

# 5. Add your executable (target name followed by source files)
add_executable(main src/main.cpp)

# 6. Link the thread library to your executable
target_link_libraries(main PRIVATE Threads::Threads)