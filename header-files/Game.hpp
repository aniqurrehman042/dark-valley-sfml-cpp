#ifndef Game_H
#define Game_H

#include <iostream>
#include <ctime>
#include <cstdlib>

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
public:
    // Constructors / Destructors

    Game();
    virtual ~Game();

    // Functions

    void updateSFMLEvents();
    void update();
    void render();
    void run();

private:
    // Variables

    sf::RenderWindow *window;
    sf::Event sfEvent;

    // Initializers

    void initWindow();
};

#endif