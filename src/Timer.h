#pragma once

const int TARGET_FPS = 60;
const float TARGET_DELTATIME = 1.0f / TARGET_FPS; // time b/w frames

class Timer{
  public:
    Timer();
  
    void Tick(); //updates delta_time_
    float GetDeltaTime() const { return delta_time_; }
  private:
    float delta_time_;
    float last_time_;
};