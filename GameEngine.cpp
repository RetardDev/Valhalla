//
// Created by cryptic on 01/11/23.
//

#include "GameEngine.h"

GameEngine::GameEngine() {
    this->initGame();
}

GameEngine::~GameEngine() {
    delete this->window;
}

void GameEngine::initGame() {
    this->window = new sf::RenderWindow(sf::VideoMode(800, 800), "Valhalla");
}

bool GameEngine::isRunning() {
    return this->window->isOpen();
}

void GameEngine::update() {
    while(this->window->pollEvent(this->event))
    {
        if(this->event.type == sf::Event::Closed)
            this->window->close();
    }
    background.updateTexture();

}

void GameEngine::draw() {
    this->window->clear();
    this->window->draw(background.getBackground());
    this->window->display();
}
