//
// Created by cryptic on 07/11/23.
//

#include "Background.h"

Background::Background() {
    initBackground();
}

Background::~Background() {

}

void Background::initBackground() {
    this->spaceTexture.loadFromFile("Images/background.png");
    this->spaceTexture.setRepeated(true);
    this->background.setTexture(spaceTexture);
    this->textureRect = sf::IntRect(0,0, 800, 800);
    this->background.setScale(2, 2);
//    this->background.setPosition(100,100);
    frames = 0;
}
sf::Sprite Background::getBackground() {
    return this->background;
}

void Background::updateTexture() {
    frames += 1;
    if(frames % 30 == 0) {
        this->textureRect.top += 1;
        this->background.setTextureRect(textureRect);
        frames = 0;
    }
    }
