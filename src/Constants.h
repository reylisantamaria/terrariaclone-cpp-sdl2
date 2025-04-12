#pragma once

struct ScreenConfig {
  int WIDTH  = 800;
  int HEIGHT = 640;
};

inline ScreenConfig screen;

namespace kPhysics {
  constexpr float TILE_SIZE = 16.0f;              // pixels/tile
  constexpr float GRAVITY   = TILE_SIZE * 51.0f;  // 816 px/sec^2
  inline float GetFloorY() {
    return static_cast<float>(screen.HEIGHT) - TILE_SIZE;
  }
}
namespace kPlayer {
  constexpr float RUN_SPEED       = kPhysics::TILE_SIZE * 11.36f;
  constexpr float JUMP_SPEED      = 320.0f;
  constexpr float MAX_FALL_SPEED  = kPhysics::TILE_SIZE * 37.5f;
  constexpr float MAX_JUMP_HEIGHT = kPhysics::TILE_SIZE * 5.0f;
}

namespace Tiles {
  constexpr char GROUND   = '1';
  constexpr char EMPTY    = '0';
  constexpr int MAP_WIDTH     = 50;
  constexpr int MAP_HEIGHT    = 40;
  constexpr int TILE_SIZE = static_cast<int>(kPhysics::TILE_SIZE);
};
