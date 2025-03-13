#include <SDL.h>
#include "Player.h"
#include <iostream>

using namespace std;

const float TILE_SIZE = 24.0f;
const float MOVE_SPEED = 6.0f * TILE_SIZE;
const float GRAVITY = 50.0f;

Player::Player(float x, float y, int width, int height,
               const char* texturePath, SDL_Renderer* renderer)
  : GameObject(x, y, width, height, texturePath, renderer),
    velocityX_(0), velocityY_(0), jumping_(false) { }

Player::~Player(){
}

void Player::Render() {
  GameObject::Render();
}

void Player::Update(float delta_time) {
  // base class update
  GameObject::Update(delta_time);

  // movement
  HandleInput();

  velocityY_ += GRAVITY * delta_time; // applying gravity

  // udpates the player's position based on velocity
  // multiplying by delta ensures the speed stays consitent
  // regardless of the frame rate
  SetX(GetX() + velocityX_ * delta_time);
  SetY(GetY() + velocityY_ * delta_time);

  // will make sure the player lands at y-500 (test)
  if (GetY() >= 500) {
    SetY(500);
    velocityY_ = 0;
    jumping_ = false;
  }

  // Debugging 
  cout << "Jumping: " << jumping_ 
  << ", Y: " << GetY() 
  << ", VelY: " << velocityY_ 
  << endl;
}

void Player::Jump() {
  if (!jumping_) {
  jumping_ = true;
  velocityY_ = -MOVE_SPEED * 0.5f; // upward velocity
  }
}

void Player::HandleInput() {
  const Uint8* current_key_states = SDL_GetKeyboardState(nullptr);

  if (current_key_states[SDL_SCANCODE_A]) {
    velocityX_ = -MOVE_SPEED;
  } else if (current_key_states[SDL_SCANCODE_D]) {
    velocityX_ = MOVE_SPEED;
  } else {
    velocityX_ = 0;
  }
  if (current_key_states[SDL_SCANCODE_SPACE]) {
    Jump();
  }
}