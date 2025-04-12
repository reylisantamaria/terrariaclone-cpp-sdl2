cmake_minimum_required(VERSION 3.16)
project(TerrariaClone VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(TerrariaClone ${SOURCES})

# Platform-specific configuration
if(WIN32)
  # Windows configuration
  # Set SDL2 paths - adjust if your SDL2 is installed elsewhere
  set(SDL2_PATH "${CMAKE_SOURCE_DIR}/vendor/SDL2" CACHE PATH "Path to SDL2")
  set(SDL2_IMAGE_PATH "${CMAKE_SOURCE_DIR}/vendor/SDL2_image" CACHE PATH "Path to SDL2_image")
  
  # Include directories
  target_include_directories(TerrariaClone PRIVATE
    "${SDL2_PATH}/include"
    "${SDL2_IMAGE_PATH}/include"
  )
  
  # Link libraries
  target_link_libraries(TerrariaClone PRIVATE
    "${SDL2_PATH}/lib/x64/SDL2.lib"
    "${SDL2_PATH}/lib/x64/SDL2main.lib"
    "${SDL2_IMAGE_PATH}/lib/x64/SDL2_image.lib"
  )
  
  # Copy DLLs to output directory
  add_custom_command(TARGET TerrariaClone POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
      "${SDL2_PATH}/lib/x64/SDL2.dll"
      "${CMAKE_BINARY_DIR}"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
      "${SDL2_IMAGE_PATH}/lib/x64/SDL2_image.dll"
      "${CMAKE_BINARY_DIR}"
  )
else()
  # macOS configuration - using frameworks
  find_library(SDL2_FRAMEWORK SDL2 PATHS /Library/Frameworks)
  find_library(SDL2_IMAGE_FRAMEWORK SDL2_image PATHS /Library/Frameworks)
  
  if(NOT SDL2_FRAMEWORK OR NOT SDL2_IMAGE_FRAMEWORK)
    message(FATAL_ERROR "SDL2 frameworks not found in /Library/Frameworks")
  endif()
  
  target_link_libraries(TerrariaClone PRIVATE ${SDL2_FRAMEWORK} ${SDL2_IMAGE_FRAMEWORK})
  target_include_directories(TerrariaClone PRIVATE
    /Library/Frameworks/SDL2.framework/Headers
    /Library/Frameworks/SDL2_image.framework/Headers
  )
endif()