#pragma once

#include <SDL.h>

class GameObject {
  public:
    GameObject(float x, float y, int width, int height, const char* texturesheet, SDL_Renderer* ren);
    virtual ~GameObject();

    virtual void Update(float delta_time);
    virtual void Render();

    float GetX() const { return x_; }
    float GetY() const { return y_; }
    int GetHeight() const { return height_; }
    int GetWidth() const { return width_; }

    void SetX(float newX) { x_ = newX; }
    void SetY(float newY) { y_ = newY; }
    
  private: 
    float x_, y_;
    int height_, width_;
    SDL_Texture* objTexture_;
    SDL_Renderer* renderer_;
};