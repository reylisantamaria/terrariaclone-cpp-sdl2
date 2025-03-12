#include <SDL.h>
#include "Player.h"
#include <iostream>

using namespace std;

const float TILE_SIZE = 24.0f;
const float MOVE_SPEED = 6.0f * TILE_SIZE;

Player::Player(float x, float y, int width, int height,
               const char* texturePath, SDL_Renderer* renderer)
  : GameObject(x, y, width, height, texturePath, renderer),
    velocityX_(0), velocityY_(0) { }

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

  // udpates the player's position based on velocity
  // multiplying by delta ensures the speed stays consitent
  // regardless of the frame rate
  SetX(GetX() + velocityX_ * delta_time);
  SetY(GetY() + velocityY_ * delta_time);
  cout << "X: " << GetX() + velocityX_ * delta_time << endl;

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
}