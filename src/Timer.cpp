#include "Timer.h"
#include "SDL.h"

Timer::Timer(): last_time_(SDL_GetTicks()), delta_time_(0.0f) {}

void Timer::Tick() {
  Uint32 current_time = SDL_GetTicks();
  delta_time_ = (current_time - last_time_) / 1000.0f; // converts milliseconds to seconds

  // Caps dt to avoid large jumps
  if (delta_time_ > TARGET_DELTATIME) {
    delta_time_ = TARGET_DELTATIME;
  }

  last_time_ = current_time;
}