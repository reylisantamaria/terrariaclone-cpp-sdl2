#pragma once

#include <SDL.h>

class GameObject {
  public:
    GameObject(int x, int y, int width, int height, const char* texturesheet, SDL_Renderer* ren);
    virtual ~GameObject();

    virtual void Update(float delta_time);
    virtual void Render();

    int GetX() const { return x_; }
    int GetY() const { return y_; }
    int GetHeight() const { return height_; }
    int GetWidth() const { return width_; }

    void SetX(int newX) { x_ = newX; }
    void SetY(int newY) { y_ = newY; }
    
  private: 
    int x_, y_;
    int height_, width_;
    SDL_Texture* objTexture_;
    SDL_Renderer* renderer_;
};