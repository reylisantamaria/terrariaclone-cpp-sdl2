#include "Entity.h"
#include "TextureManager.h"

// how we create our object
Entity::Entity(float x, float y, int width, int height, const char* texturesheet, SDL_Renderer* ren)
  : renderer_(ren), x_(x), y_(y), width_(width), height_(height) {
  objTexture_ = TextureManager::LoadTexture(texturesheet, ren);
}

Entity::~Entity() {
  if (objTexture_) SDL_DestroyTexture(objTexture_);
}
// how we update our objects
void Entity::Update(float delta_time) {
  
}

void Entity::Render() {
  if (objTexture_ && renderer_) {
    SDL_Rect dstRect = {static_cast<int>(x_), static_cast<int>(y_), width_, height_}; // default size

    SDL_RenderCopy(renderer_, objTexture_, nullptr, &dstRect);
  }
}