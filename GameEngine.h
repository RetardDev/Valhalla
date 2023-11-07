//
// Created by cryptic on 01/11/23.
//

#ifndef VALHALLA_GAMEENGINE_H
#define VALHALLA_GAMEENGINE_H

#include <SFML/Graphics.hpp>
#include "Background.h"

class GameEngine {
public:
    GameEngine();
    virtual ~GameEngine();

    bool isRunning();
    void update();
    void draw();
private:
    sf::RenderWindow* window;
    sf::Event event;
    Background background;

    void initGame();
};


#endif //VALHALLA_GAMEENGINE_H
