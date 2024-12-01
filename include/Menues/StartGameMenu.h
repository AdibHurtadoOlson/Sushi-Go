#ifndef STARTGAMEMENU_H
#define STARTGAMEMENU_H

#include <SFML/Graphics.hpp>

class StartGameMenu {
public:
    StartGameMenu(float width, float height);
    void draw(sf::RenderWindow &window);
    void handleClick(sf::Vector2f mousePos);
    bool isJoinNowClicked(sf::Vector2f mousePos);
    bool isBackClicked(sf::Vector2f mousePos);

private:
    sf::Font font;
    sf::Text joinNowButton;
    sf::Text backButton;
};

#endif // STARTGAMEMENU_H