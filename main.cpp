#include <iostream>
#include "GameEngine.h"

int main() {

    GameEngine game;

    while(game.isRunning())
    {
        game.update();
        game.draw();
    }


    return 0;
}
