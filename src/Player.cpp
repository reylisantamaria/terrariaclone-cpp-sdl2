#include "Player.h"
#include "Constants.h"
#include <iostream>

using namespace std;
using namespace kPhysics;
using namespace kPlayer;

// CONSTRUCTOR

Player::Player(const Transform& transform, const char* texturePath, SDL_Renderer* renderer)
  : Entity(transform.x, transform.y, transform.w, transform.h, texturePath, renderer),
    velocityX_(0),
    velocityY_(0),
    is_grounded_(false),
    jumping_(false) {}


// ======================[ UPDATE ]================
void Player::Update(float delta_time) {
  HandleInput();

  if (!is_grounded_) {
    velocityY_ +=  GRAVITY * delta_time;  // apply gravity
    if (initial_y_ - y_ >= MAX_JUMP_HEIGHT) {  // if the jump goes over the max jump height
      jumping_ = false;   // prevents upward momentum
      state_ = PlayerState::FALLING;
    }
    velocityY_ = std::min(velocityY_, MAX_FALL_SPEED);
  }
  // changes position based on movement
  x_ += velocityX_ * delta_time;
  y_ += velocityY_ * delta_time;

  // :::::::::::: Temp Ground Collision :::::::::::::

  if (y_ + height_ >= GetFloorY()) {  // catches the player before it falls forever
    velocityY_ = 0;
    y_ = GetFloorY() - height_;
    is_grounded_ = true;
  }
  // :::::::::: Debug ::::::::::
  // const char* states[] = {"IDLE", "RUNNING", "JUMPING"};
  // cout << "State: " << states[static_cast<int>(state_)] << "\n";
}

// ======================[ RENDER ]================
void Player::Render() {
  Entity::Render();

  // --- DRAW OUTLINE ---
  SDL_SetRenderDrawColor(renderer_, 255, 0, 0, 1);
  SDL_Rect outlineRect = {
      static_cast<int>(x_),
      static_cast<int>(y_),
      width_,
      height_
  };
  SDL_RenderDrawRect(renderer_, &outlineRect); // Draw the outline
  SDL_SetRenderDrawColor(renderer_, 137, 196, 244, 1);
}

// ======================[ INPUT ]================
void Player::HandleInput() {
  const Uint8* keys = SDL_GetKeyboardState(nullptr);
  // :::::::::::::: Horizontal Movement ::::::::::::

  if (keys[SDL_SCANCODE_A]) {
    velocityX_ = -RUN_SPEED;
  } else if (keys[SDL_SCANCODE_D]) {
    velocityX_ = RUN_SPEED;
  } else {
    velocityX_ = 0;
  }
  // :::::::::::::::: JUMP :::::::::::::::::::
  if (keys[SDL_SCANCODE_SPACE] && is_grounded_) {
    velocityY_ = -JUMP_SPEED * 0.8f;
    is_grounded_ = false;
    jumping_ = true;
    initial_y_ = y_;
  }
  if (keys[SDL_SCANCODE_SPACE] && jumping_) {
    velocityY_ = -JUMP_SPEED;
  }
  // :::::::::::: Player State ::::::::::::
  if (!is_grounded_) {
    state_ = PlayerState::JUMPING;
  } else if (velocityX_ != 0) {
    state_ = PlayerState::RUNNING;
  } else {
    state_ = PlayerState::IDLE;
  }
  
}