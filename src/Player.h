#pragma once

#include <SDL.h>
#include "Entity.h"
#include "Transform.h"

class Player : public Entity {
  public:
    Player(const Transform& transform, const char* texturesheet, SDL_Renderer* renderer);

    void Update(float delta_time) override;
    void Render() override;
    void HandleInput();

  private:
    bool is_grounded_;
    bool is_jumping_;
    float velocityX_, velocityY_;
    float initial_y_;
};