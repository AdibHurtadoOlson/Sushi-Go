#ifndef SETTINGSMENU_H
#define SETTINGSMENU_H

#include <SFML/Graphics.hpp>

class SettingsMenu {
public:
    SettingsMenu(float width, float height);
    void draw(sf::RenderWindow &window);
    void handleClick(sf::Vector2f mousePos);
    bool isBackClicked(sf::Vector2f mousePos);

private:
    sf::Font font;
    sf::Text backButton;
};

#endif // SETTINGSMENU_H