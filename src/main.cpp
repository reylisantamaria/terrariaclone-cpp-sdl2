#include "Game.h"
#include "Constants.h"

int main(int argc, char* args[]) {
  Game game("TerrariaClone", SCREENWIDTH, SCREENHEIGHT, false);
  game.Run();
  return 0;
}

