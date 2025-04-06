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

  velocityY_ +=  Constants::kGravity * delta_time;
  x_ += velocityX_ * delta_time; // Move horizonatally
  y_ += velocityY_ * delta_time; // move vertically

  //------ Temp -------

  if (y_ + height_ >= Constants::kFloorY) {  // catches the player before it falls forever
    velocityY_ = 0;
    y_ = Constants::kFloorY - height_;
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
    velocityX_ = -kMaxSpeed;
  } else if (keys[SDL_SCANCODE_D]) {
    velocityX_ = kMaxSpeed;
  } else {
    velocityX_ = 0;
  }
  if (keys[SDL_SCANCODE_SPACE] && is_grounded_) {
    velocityY_ = -kMaxSpeed * 0.8f;
    is_grounded_ = false;
    is_jumping_ = true;
    initial_y_ = y_;
  }
}