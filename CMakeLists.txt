cmake_minimum_required(VERSION 3.16)

# Set the project name and version
project(TerrariaClone VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SDL2 framework
find_library(SDL2_FRAMEWORK SDL2 PATHS /Library/Frameworks)
find_library(SDL2_IMAGE_FRAMEWORK SDL2_image PATHS /Library/Frameworks)

# Specify the framework search path
include_directories(/Library/Frameworks/SDL2.framework/Headers)
include_directories(/Library/Frameworks/SDL2_image.framework/Headers)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Add executable
add_executable(TerrariaClone ${SOURCES})

# Link with SDL2 framework
target_link_libraries(TerrariaClone ${SDL2_FRAMEWORK} ${SDL2_IMAGE_FRAMEWORK})