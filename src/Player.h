#pragma once

#include <SDL.h>
#include "Entity.h"
#include "Transform.h"


enum class PlayerState {
  IDLE,
  RUNNING,
  JUMPING,
  FALLING
};

class Player : public Entity {
  public:
    Player(const Transform& transform, const char* texturesheet, SDL_Renderer* renderer);

    void Update(float delta_time) override;
    void Render() override;
    void HandleInput();

  private:
    bool is_grounded_;
    bool jumping_; // tracks if jump key is held
    float velocityX_, velocityY_;
    float initial_y_; // tracks where the jump started

    PlayerState state_;
};