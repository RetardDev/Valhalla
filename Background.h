//
// Created by cryptic on 07/11/23.
//

#ifndef VALHALLA_BACKGROUND_H
#define VALHALLA_BACKGROUND_H
#include <SFML/Graphics.hpp>

class Background {
public:
    Background();
    virtual ~Background();

    sf::Sprite getBackground();
    void updateTexture();
private:
    sf::Texture spaceTexture;
    sf::IntRect textureRect;
    sf::Sprite background;
    int frames;

    void initBackground();
};


#endif //VALHALLA_BACKGROUND_H
