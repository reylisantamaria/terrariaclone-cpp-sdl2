#include <iostream>
#include "Game.hpp"

Game::Game() : isRunning(false), window(nullptr), renderer(nullptr),
               count(0), playerX(100), playerY(100), playerSpeed(5) {}
Game::~Game(){}

void Game::init(const char* p_title, int p_w, int p_h, bool fullscreen) {
  int flags = 0;
  if (fullscreen) {
    flags = SDL_WINDOW_FULLSCREEN;
  }

  if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
    // Create Window
    window = SDL_CreateWindow(p_title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, p_w, p_h, flags);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer) {
      SDL_SetRenderDrawColor(renderer, 96, 128, 255, 255);
      std::cout << "Renderer created!" << std::endl;
    }
    isRunning = true; // Mark the game as running

    // Load the player image 
    SDL_Surface *tmpSurface = IMG_Load("../resources/images/entities/player.png");
    if (!tmpSurface) {
      std::cerr << "Failed to load player image! Error: " << IMG_GetError() << std::endl;
      isRunning = false;
    }
    playerTex = SDL_CreateTextureFromSurface(renderer, tmpSurface);
    SDL_FreeSurface(tmpSurface);

    keystates = SDL_GetKeyboardState(nullptr);
  } else {
    isRunning = false; // Mark the game as not running
    std::cerr << "Error: " << SDL_GetError() << std::endl;
  }

}

void Game::handleEvents() {
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
        case SDL_QUIT:
          isRunning = false;
          break;
        // Add more event handling here
        default:
          break;
    }
  }
}

void Game::update() {
  // update game logic here
  if (keystates[SDL_SCANCODE_A]) {
    playerX -= playerSpeed;
  }
  if (keystates[SDL_SCANCODE_D]) {
    playerX += playerSpeed;
  }
  count++;
  std::cout << count << std::endl;
}
void Game::render() {
  // clears screen
  SDL_RenderClear(renderer);

  // this is where we would add stuff to render
  SDL_Rect playerRect = {playerX, playerY, 64, 64};
  SDL_RenderCopy(renderer, playerTex, nullptr, &playerRect);
  // Update the screen
  SDL_RenderPresent(renderer);
}
void Game::clean() {
  // Clean up resources
  SDL_DestroyTexture(playerTex);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  isRunning = false;
  std::cout << "Game Cleaned" << std::endl;
}


