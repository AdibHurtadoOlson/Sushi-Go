#ifndef PAUSEGAMEMENU_H
#define PAUSEGAMEMENU_H

#include <SFML/Graphics.hpp>

class PauseGameMenu {
public:
    PauseGameMenu(float width, float height);
    void draw(sf::RenderWindow &window);
    void handleClick(sf::Vector2f mousePos);
    bool isResumeClicked(sf::Vector2f mousePos);
    bool isExitClicked(sf::Vector2f mousePos);

private:
    sf::Font font;
    sf::Text resumeButton;
    sf::Text exitButton;
    sf::RectangleShape background;
};

#endif // PAUSEGAMEMENU_H