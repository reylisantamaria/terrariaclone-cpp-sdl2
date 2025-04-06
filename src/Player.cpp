#include "Player.h"
#include "Constants.h"
#include <iostream>

using namespace std;

// CONSTRUCTOR

Player::Player(const Transform& transform, const char* texturePath, SDL_Renderer* renderer)
  : Entity(transform.x, transform.y, transform.w, transform.h, texturePath, renderer),
    velocityX_(0),
    velocityY_(0),
    is_grounded_(false),
    is_jumping_(false) {}


// ------------------------------ MEMBER FUCNTIONS -------------------------------------
void Player::Update(float delta_time) {
  HandleInput();

  if (!is_grounded_) {
    velocityY_ +=  kPhysics::GRAVITY * delta_time;
    if (initial_y_ - y_ >= kPlayer::MAX_JUMP_HEIGHT) {
      is_jumping_ = false;
    }
  }
  x_ += velocityX_ * delta_time; // Move horizonatally
  y_ += velocityY_ * delta_time; // move vertically

  //------ Temp -------

  if (y_ + height_ >= kPhysics::FLOOR_Y) {  // catches the player before it falls forever
    velocityY_ = 0;
    y_ = kPhysics::FLOOR_Y - height_;
    is_grounded_ = true;
  }

  cout << "Y: " << y_ << " | VelY: " << velocityY_ << " | Grounded: " << is_grounded_ << endl;
}

void Player::Render() {
  Entity::Render();
}

void Player::HandleInput() {
  const Uint8* keys = SDL_GetKeyboardState(nullptr);

  if (keys[SDL_SCANCODE_A]) {
    velocityX_ = -kPlayer::BASE_RUN_SPEED;
  } else if (keys[SDL_SCANCODE_D]) {
    velocityX_ = kPlayer::BASE_RUN_SPEED;
  } else {
    velocityX_ = 0;
  }
  // -------- JUMP -------------
  if (keys[SDL_SCANCODE_SPACE] && is_grounded_) {
    velocityY_ = -kPlayer::BASE_JUMP_SPEED * 0.8f;
    is_grounded_ = false;
    is_jumping_ = true;
    initial_y_ = y_;
  }
  if (keys[SDL_SCANCODE_SPACE] && is_jumping_) {
    velocityY_ = -kPlayer::BASE_JUMP_SPEED;
  }
}