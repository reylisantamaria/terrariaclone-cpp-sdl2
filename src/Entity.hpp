#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Entity {
  public:
    Entity(double p_x, double p_y, SDL_Texture* p_tex);
    void init();
  private:
    double x, y;
    SDL_Rect currentFrame;
    SDL_Texture* tex;
};