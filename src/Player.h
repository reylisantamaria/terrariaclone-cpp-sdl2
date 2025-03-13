#pragma once

#include <SDL.h>
#include "GameObject.h"

class Player : public GameObject {
  public:
    Player(float x, float y, int width, int height, const char* texturesheet, SDL_Renderer* renderer);
    ~Player();

    void Update(float delta_time);
    void HandleInput();
    void Jump();
    void Render();

  private:
    bool jumping_;
    float velocityX_, velocityY_;
};