#pragma once

#include <SDL.h>

class Entity {
  public:
    Entity(float x, float y, int w, int h, const char* texturesheet,
           SDL_Renderer* ren);
    virtual ~Entity();
    virtual void Update(float delta_time);
    virtual void Render();

    void SetPosition(float x, float y) { x_ = x; y_ = y;}
    
  protected: 
    float x_, y_;
    int height_, width_;
    SDL_Texture* objTexture_;
    SDL_Renderer* renderer_;
};