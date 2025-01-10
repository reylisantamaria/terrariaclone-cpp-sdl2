#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <string>

#include "RenderWindow.hpp"

class Game {
  public:
    Game(const char* p_title, int p_w, int p_h);
    void run();

  private:
    bool isRunning;
    SDL_Event event;
    RenderWindow window;
    SDL_Texture* grassTexture;
};
