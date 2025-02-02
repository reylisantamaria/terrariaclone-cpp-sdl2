#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

class Game {
  public:
    Game();
    ~Game();
    void init(const char* p_title, int p_w, int p_h, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();
    bool getRunning() const { return isRunning; } // gets the 

  private:
    bool isRunning;
    SDL_Event event;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *playerTex;
    int playerX;
    int playerY;
    int playerSpeed;
    const Uint8 *keystates;
    int count;
};
