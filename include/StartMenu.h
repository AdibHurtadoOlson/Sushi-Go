#ifndef STARTMENU_H
#define STARTMENU_H

#include <SFML/Graphics.hpp>

class StartMenu {
public:
    StartMenu(float width, float height);
    void draw(sf::RenderWindow &window);
    void handleClick(sf::Vector2f mousePos);
    bool isStartClicked(sf::Vector2f mousePos);
    bool isSettingsClicked(sf::Vector2f mousePos);

private:
    sf::Font font;
    sf::Text startButton;
    sf::Text settingsButton;
};

#endif // STARTMENU_H