#include "Timer.h"
#include "SDL.h"

Timer::Timer(): last_time_(SDL_GetTicks()), delta_time_(0.0f) {}


// this function caluculates how much time has passed since
// the last frame, converts it to seconds, and caps it to prevent 
// the game from breaking
void Timer::Tick() {
  Uint32 current_time = SDL_GetTicks(); // milliseconds since program started
  Uint32 frame_time = current_time - last_time_;
  
  delta_time_ = (current_time - last_time_) / 1000.0f; // converts milliseconds to seconds

  // Caps dt to avoid large jumps
  if (delta_time_ > TARGET_DELTATIME) {
    delta_time_ = TARGET_DELTATIME;
  }

  if (frame_time < TARGET_FRAME_TIME) {
    SDL_Delay(TARGET_FRAME_TIME - frame_time);
  }
  last_time_ = current_time; // updates last time 
}