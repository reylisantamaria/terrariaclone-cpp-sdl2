#pragma once

#include <SDL.h>

class Entity {
  public:
    Entity(float x, float y, int width, int height,
               const char* texturesheet, SDL_Renderer* ren);
    virtual ~Entity();
    virtual void Update(float delta_time);
    virtual void Render();

    float GetX() const { return x_; }
    float GetY() const { return y_; }
    int GetHeight() const { return height_; }
    int GetWidth() const { return width_; }
    SDL_Renderer* GetRenderer() const { return renderer_; }

    void SetX(float newX) { x_ = newX; }
    void SetY(float newY) { y_ = newY; }
    
  private: 
    float x_, y_;
    int height_, width_;
    SDL_Texture* objTexture_;
    SDL_Renderer* renderer_;
};