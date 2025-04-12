#include "Game.h"
#include "Constants.h"
#include <iostream>

using namespace std;

int main(int argc, char* args[]) {
  cout << "Enter the screen width: ";
  cin >> screen.WIDTH;
  cout << "\n";
  cout << "Enter the screen height: ";
  cin >> screen.HEIGHT;
  cout << "\n";

  Game game("TerrariaClone", screen.WIDTH, screen.HEIGHT, false);
  game.Run();
  return 0;
}

