#include "Card.h"

Card::Card(const std::string &name, const sf::Color &color, float width, float height) : name(name) {
    shape.setSize(sf::Vector2f(width, height));
    shape.setFillColor(color);

    if (!font.loadFromFile("resources/fonts/arial_narrow_7.ttf")) {
        // Handle error
    }

    text.setFont(font);
    text.setString(name);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Black);
    text.setPosition(shape.getPosition().x + 10, shape.getPosition().y + 10);
}

void Card::draw(sf::RenderWindow &window, float x, float y) {
    shape.setPosition(x, y);
    text.setPosition(x + 10, y + 10);
    window.draw(shape);
    window.draw(text);
}

sf::FloatRect Card::getGlobalBounds() const {
    return shape.getGlobalBounds();
}

std::string Card::getName() const {
    return name;
}
