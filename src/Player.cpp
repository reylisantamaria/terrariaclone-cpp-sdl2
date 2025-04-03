#include <SDL.h>
#include "Player.h"
#include <iostream>

using namespace std;

// CONSTRUCTOR

Player::Player(float x, float y, int width, int height,
               const char* texturePath, SDL_Renderer* renderer)
  : Entity(x, y, width, height, texturePath, renderer),
    velocityX_(0),
    velocityY_(0),
    is_grounded_(false),
    jumping_(false) {}

// DECONSTRUCTOR 
Player::~Player(){

}


// ------------------------------ MEMBER FUCNTIONS -------------------------------------
void Player::Update(float delta_time) {
  HandleInput();

  velocityY_ +=  kGravity * delta_time;
  SetX(GetX() + velocityX_ * delta_time); // Move horizonatally
  SetY(GetY() + velocityY_ * delta_time); // move vertically

  //------ Temp -------

  is_grounded_ = (GetY() + GetHeight() >= 500.0f);

  if (is_grounded_) {
    velocityY_ = 0;
    SetY(500.0f - GetHeight());
  }

  cout << "Y: " << GetY() << " | VelY: " << velocityY_ << " | Grounded: " << is_grounded_ << endl;
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
  }
}