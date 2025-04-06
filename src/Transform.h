#pragma once

struct Transform {
  float x, y;
  int w, h;

  Transform(float x = 0, float y = 0, int w = 0, int h = 0) 
    : x(x), y(y), w(w), h(h) {}
};