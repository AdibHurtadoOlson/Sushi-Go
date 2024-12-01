#include "Menues/SettingsMenu.h"

SettingsMenu::SettingsMenu(float width, float height) {
    if (!font.loadFromFile("resources/fonts/arial_narrow_7.ttf")) {
        // Handle error
    }

    backButton.setFont(font);
    backButton.setString("Back");
    backButton.setCharacterSize(24);
    backButton.setFillColor(sf::Color::Black);
    backButton.setPosition(sf::Vector2f(width / 2 - backButton.getGlobalBounds().width / 2, height / 2));
}

void SettingsMenu::draw(sf::RenderWindow &window) {
    window.draw(backButton);
}

void SettingsMenu::handleClick(sf::Vector2f mousePos) {
    // Handle button clicks if needed
}

bool SettingsMenu::isBackClicked(sf::Vector2f mousePos) {
    return backButton.getGlobalBounds().contains(mousePos);
}
