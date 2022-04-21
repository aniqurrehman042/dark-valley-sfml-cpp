#include "Game.hpp"

using namespace sf;

void Update(RectangleShape &square, int &keyTime);
void Draw(RenderWindow &window, RectangleShape &square);

int main()
{
    Game game;
    game.run();

    return 0;
}
