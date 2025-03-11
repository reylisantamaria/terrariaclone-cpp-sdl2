#pragma once
#include <SDL.h>
#include <vector>
#include <iostream>
#include "Timer.h"

class Game {
  public:
    Game(const char* p_title, int p_w, int p_h, bool fullscreen);
    ~Game();

    void Run();
    bool GetRunning() const { return running_; }

  private:
    void HandleEvents();
    void Update();
    void Render();
    
    bool running_;
    SDL_Window *window;
    SDL_Renderer *renderer;
    int count = 0;
};
