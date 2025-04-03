#pragma once

#include <SDL.h>
#include "Entity.h"

class Player : public Entity {
  public:
    Player(float x, float y, int width, int height, const char* texturesheet, SDL_Renderer* renderer);
    ~Player() override; 

    void Update(float delta_time) override;
    void Render() override;
    void HandleInput();


  private:
    bool is_grounded_;
    bool jumping_;
    float velocityX_, velocityY_;


    // constants
    static constexpr float kTitleSize = 24.0f;
    static constexpr float kMaxSpeed = 6.0f * kTitleSize;
    static constexpr float kGravity = 60.0f;
    static constexpr float kFloorY = 500.0f;
};