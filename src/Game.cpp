#include <iostream>
#include <vector>
#include "Game.h"
#include "TextureManager.h"
#include "Timer.h"

Game::Game(const char* p_title, int p_w, int p_h, bool fullscreen)
  : running_(false), window(nullptr), renderer(nullptr) {
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
    running_ = true; // Mark the game as running
  } else {
    std::cerr << "Error: " << SDL_GetError() << std::endl;
  }
}

Game::~Game() {
  // Clean up resources
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  running_ = false;
  std::cout << "Game Cleaned" << std::endl;
}

void Game::Run() {
  Timer timer;
  while (running_) {
    timer.Tick();
    float deltaTime = timer.GetDeltaTime();

    HandleEvents();
    Update();
    Render();
  }
}

void Game::HandleEvents() {
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
        case SDL_QUIT:
          running_ = false;
          break;
        // Add more event handling here
        default:
          break;
    }
  }
}

void Game::Update() {
  std::cout << count << std::endl;
  count++;
}


void Game::Render() {
  // clears screen
  SDL_RenderClear(renderer);
  // Update the screen
  SDL_RenderPresent(renderer);
}


