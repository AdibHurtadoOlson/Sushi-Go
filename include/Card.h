#ifndef CARD_H
#define CARD_H

#include <SFML/Graphics.hpp>
#include <string>

class Card {
public:
    Card(const std::string &name, const sf::Color &color, float width, float height);
    virtual void draw(sf::RenderWindow &window, float x, float y);
    sf::FloatRect getGlobalBounds() const;
    std::string getName() const; // Add this method

protected:
    std::string name;
    sf::RectangleShape shape;
    sf::Text text;
    sf::Font font;
};

#endif // CARD_H
