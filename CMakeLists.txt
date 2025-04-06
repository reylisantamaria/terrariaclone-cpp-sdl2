cmake_minimum_required(VERSION 3.16)

# Set the project name and version
project(TerrariaClone VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SDL2 framework
find_library(SDL2_FRAMEWORK SDL2 PATHS /Library/Frameworks)
find_library(SDL2_IMAGE_FRAMEWORK SDL2_image PATHS /Library/Frameworks)

# Specify the framework search path
include_directories(TerrariaClone PRIVATE
  /Library/Frameworks/SDL2.framework/Headers
  /Library/Frameworks/SDL2_image.framework/Headers
)

file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add executable
add_executable(TerrariaClone ${SOURCES})

# Link with SDL2 framework
target_link_libraries(TerrariaClone PRIVATE ${SDL2_FRAMEWORK} ${SDL2_IMAGE_FRAMEWORK})