cmake_minimum_required(VERSION 3.16)

# Set the project name and version
project(TerrariaClone VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SDL2 framework
if(APPLE)
  find_library(SDL2_FRAMEWORK SDL2 PATHS /Library/Frameworks)
  find_library(SDL2_IMAGE_FRAMEWORK SDL2_image PATHS /Library/Frameworks)

  if(NOT SDL2_FRAMEWORK OR NOT SDL2_IMAGE_FRAMEWORK)
  message(FATAL_ERROR "SDL2 frameworks not found in /Library/Frameworks")
  endif()
else()
  find_package(SDL2 REQUIRED)
  find_package(SDL2_image REQUIRED)
endif()

file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add executable
add_executable(TerrariaClone ${SOURCES})

if(APPLE)
  target_link_libraries(TerrariaClone PRIVATE ${SDL2_FRAMEWORK} ${SDL2_IMAGE_FRAMEWORK})

  include_directories(TerrariaClone PRIVATE
  /Library/Frameworks/SDL2.framework/Headers
  /Library/Frameworks/SDL2_image.framework/Headers
  )
else()
  target_link_libraries(TerrariaClone PRIVATE SDL2::SDL2 SDL2_image::SDL2_image)
endif()