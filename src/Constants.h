#pragma once

namespace kPhysics {
  constexpr float GRAVITY = 80.0f;
  constexpr float FLOOR_Y = 640.0f - 32.0f;
}
namespace kPlayer {
  constexpr float BASE_RUN_SPEED = 144.0f;
  constexpr float BASE_JUMP_SPEED = 70.0f;
  constexpr float MAX_JUMP_HEIGHT = 50.0f;
}

namespace Tiles {
  constexpr char GROUND = '1';
  constexpr char EMPTY = '0';
  const int MAP_WIDTH = 25;
  const int MAP_HEIGHT = 20;
  constexpr int TILE_SIZE = 32;
};

constexpr int SCREENWIDTH = 800;
constexpr int SCREENHEIGHT = 640;