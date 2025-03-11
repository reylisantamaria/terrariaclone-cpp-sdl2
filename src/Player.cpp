#include <SDL.h>
#include "Player.h"

Player::Player(int x, int y, int width, int height,
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

  HandleInput();
}

void Player::HandleInput() {
  
}