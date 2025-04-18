#pragma once
#include <SDL.h>
#include <vector>
#include <memory>

#include "Entity.h"
#include "Player.h"
#include "Timer.h"

class Game {
  public:
    Game(const char* p_title, int p_w, int p_h, bool fullscreen);
    ~Game();

    void Run();
    bool GetRunning() const { return running_; }

  private:
    void HandleEvents();
    void Update(float delta_time);
    void Render();
    
    bool running_;
    std::vector<Entity*> entities_;
    std::unique_ptr<Player> player_;
    SDL_Window *window;
    SDL_Renderer *renderer;
    
};
