#pragma once
#include <SDL.h>

const Uint32 TARGET_FPS = 60;
const float TARGET_DELTATIME = 1.0f / TARGET_FPS; // time b/w frames
const Uint32 TARGET_FRAME_TIME = 1000 / TARGET_FPS; // time per frame
class Timer{
  public:
    Timer();
  
    void Tick(); //updates delta_time_
    float GetDeltaTime() const { return delta_time_; }
  private:
    float delta_time_;
    float last_time_;
};