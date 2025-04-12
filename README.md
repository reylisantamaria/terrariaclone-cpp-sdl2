# Terraria Clone (C++ & SDL2)

A simple 2D sandbox game inspired by Terraria, built with C++ and SDL2 for macOS and Windows.

## Setup Guide

### macOS

1. **Install SDL2 Frameworks**
  
  Download them from the SDL2 website and place in `/Library/Frameworks`.
   - [SDL2-2.30.11.dmg](https://github.com/libsdl-org/SDL/releases/tag/release-2.30.11)
   - [SDL2_image-2.8.4.dmg](https://github.com/libsdl-org/SDL_image/releases/tag/release-2.8.4)

2. **Build & Run**
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ./TerrariaClone
   ```

### Windows

1. **Install SDL2 and SDL2_image**

   - Download the following **development libraries for Visual C++**:
     - [SDL2-devel-2.30.11-VC.zip](https://github.com/libsdl-org/SDL/releases/tag/release-2.30.11)
     - [SDL2_image-devel-2.8.4-VC.zip](https://github.com/libsdl-org/SDL_image/releases/tag/release-2.8.4)

   - Extract them into a `vendor/` folder at the same level as `src/`, `build/`, and `resources/`:
     ```
     vendor/
     ├── SDL2/
     │   ├── include/       ← Copy from SDL2-devel-*/include
     │   └── lib/
     │       └── x64/       ← Copy from SDL2-devel-*/lib/x64
     └── SDL2_image/
         ├── include/       ← Copy from SDL2_image-devel-*/include
         └── lib/
             └── x64/       ← Copy from SDL2_image-devel-*/lib/x64
     ```

   - **Required files**:
     - From `SDL2/lib/x64/`:
       - `SDL2.lib`
       - `SDL2.dll`
       - `SDL2main.lib`
     - From `SDL2_image/lib/x64/`:
       - `SDL2_image.lib`
       - `SDL2_image.dll`

2. **Build**
   ```bash
   mkdir build
   cd build
   cmake .. -A x64
   cmake --build . --config Release
   ```

3. **Run**
   ```bash
   .\Release\TerrariaClone.exe
   ```

## Controls

- **A/D**: Move left/right  
- **Space**: Jump (hold for higher jump)

## Project Structure

- `src/`: Source code files  
- `resources/images/entities/`: Game sprites and textures  
- `vendor/`: External libraries (Windows only)

