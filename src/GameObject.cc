#include "GameObject.h"
#include "TextureManager.h"

// how we create our object
GameObject::GameObject(int x, int y, int width, int height, const char* texturesheet, SDL_Renderer* ren)
  : renderer_(ren), x_(x), y_(y), width_(width), height_(height) {
  objTexture_ = TextureManager::LoadTexture(texturesheet, ren);
}

void GameObject::Update() {
  if (GetX() < 0) {
    SetX(0);
  }
}

void GameObject::Render() {
  if (objTexture_ && renderer_) {
    SDL_Rect dstRect = {x_, y_, width_, height_}; // default size

    SDL_RenderCopy(renderer_, objTexture_, nullptr, &dstRect);
  }
}