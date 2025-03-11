#pragma once

#include <SDL.h>
#include "GameObject.h"

class Player : public GameObject {
  public:
    Player(int x, int y, int width, int height, const char* texturesheet, SDL_Renderer* renderer);
    ~Player();

    void Update(float delta_time);
    void HandleInput();
    void Render();

  private:
    float velocityX_, velocityY_;
};