#include <iostream>

#include "Game.hpp"

Game::Game(const char* p_title, int p_w, int p_h)
    : isRunning(true), window(p_title, p_w, p_h) {

  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
    isRunning = false; 
  }

  if (!(IMG_Init(IMG_INIT_PNG))) {
    std::cerr << "IMG_Init Error: " << SDL_GetError() << std::endl;
    isRunning = false;
  }
  grassTexture = window.loadTexture("resources/images/tiles/grass/1.png"); // grass block
}

void Game::run() {
  while (isRunning) {
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
          isRunning = false;
      }
    }
    window.clear();
    window.render(grassTexture);
    window.display();
  }
  // Clean up resources
  window.cleanUp();
  SDL_Quit();
}