#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "Constants.h"

class TextureManager {
  public:
    static SDL_Texture* LoadTexture(const char* filePath, SDL_Renderer* renderer);
};