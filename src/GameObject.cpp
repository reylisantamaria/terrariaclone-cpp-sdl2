#include "GameObject.h"
#include "TextureManager.h"

// how we create our object
GameObject::GameObject(float x, float y, int width, int height, const char* texturesheet, SDL_Renderer* ren)
  : renderer_(ren), x_(x), y_(y), width_(width), height_(height) {
  objTexture_ = TextureManager::LoadTexture(texturesheet, ren);
}

GameObject::~GameObject() {
  
}
// how we update our objects
void GameObject::Update(float delta_time) {
  
}

void GameObject::Render() {
  if (objTexture_ && renderer_) {
    SDL_Rect dstRect = {static_cast<int>(x_), static_cast<int>(y_), width_, height_}; // default size

    SDL_RenderCopy(renderer_, objTexture_, nullptr, &dstRect);
  }
}