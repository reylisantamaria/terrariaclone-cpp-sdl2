#include <iostream>
#include <vector>
#include "Game.h"
#include "TextureManager.h"
#include "Timer.h"

// Main functions for the game



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

    player_ = new Player(100, 500, 50, 50, "../resources/images/entities/player.png", renderer);

    game_objects_.push_back(player_);
  } else {
    std::cerr << "Error: " << SDL_GetError() << std::endl;
  }
}

Game::~Game() {
  // Clean up resources
  for (auto obj : game_objects_) {
    delete obj;
  }
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  running_ = false;
  std::cout << "Game Cleaned" << std::endl;
}

void Game::Run() {
  // main game loop
  Timer timer;
  while (running_) {
    timer.Tick();
    float deltaTime = timer.GetDeltaTime();

    HandleEvents();
    Update(deltaTime);
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

// main update 
void Game::Update(float delta_time) {
  for (auto obj : game_objects_) {
    obj->Update(delta_time);
  }
  player_->HandleInput();
  player_->Update(delta_time);
}


void Game::Render() {
  // clears screen
  SDL_RenderClear(renderer);
  // Render all game objects
  for (auto obj : game_objects_) {
    obj->Render();
  }
  // Update the screen
  SDL_RenderPresent(renderer);
}


