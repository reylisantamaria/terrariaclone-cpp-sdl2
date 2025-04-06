#include "TextureManager.h"
#include <iostream>

SDL_Texture* TextureManager::LoadTexture(const char* texture, SDL_Renderer* renderer) {
  SDL_Surface* tempSurface = IMG_Load(texture);
  if (!tempSurface) {
    std::cerr << "Failed to load image: " << IMG_GetError() << "\n";
    return nullptr;
  }
  SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, tempSurface);
  SDL_FreeSurface(tempSurface);

  if(!tempSurface) {
    std::cerr << "Failed to create texture: " << SDL_GetError() << "\n";
    return nullptr;
  }
  return tex;
}
