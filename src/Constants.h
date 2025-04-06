#pragma once

namespace Constants {
  constexpr float kGravity = 60.0f;
  constexpr float kFloorY = 640.0f - 32.0f;

  // Player (defaults)
  constexpr float kPlayerJumpForce = 500.0f;
  constexpr float kPlayerMoveSpeed = 200.0f;
  constexpr float kPlayerMaxJumpHeight = 80.0f;
}

namespace Tiles {
  constexpr char GROUND = '1';
  constexpr char EMPTY = '0';
  const int MAP_WIDTH = 25;
  const int MAP_HEIGHT = 20;
  constexpr int TILE_SIZE = 32;
};