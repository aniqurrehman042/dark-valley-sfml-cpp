#include "Game.hpp"

// Static functions

// Constructors / Destructors

Game::Game()
{
    initWindow();
}

Game::~Game()
{
    delete window;
}

void Game::updateSFMLEvents()
{
    while (window->pollEvent(sfEvent))
    {
        if (sfEvent.type == sf::Event::Closed)
            window->close();
    }
}

void Game::update()
{
    updateSFMLEvents();
}

void Game::render()
{
    window->clear();

    // Render items

    window->display();
}

void Game::run()
{
    while (window->isOpen())
    {
        update();
        render();
    }
}

// Initializer functions

void Game::initWindow()
{
    // Creates an SFML window using options from a window.ini file.
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Dark Valley");
}
