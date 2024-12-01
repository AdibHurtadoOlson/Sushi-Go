#include "Menues/StartMenu.h"

StartMenu::StartMenu(float width, float height) {
    if (!font.loadFromFile("resources/fonts/arial_narrow_7.ttf")) {
        // Handle error
    }

    startButton.setFont(font);
    startButton.setString("Start Game");
    startButton.setCharacterSize(24);
    startButton.setFillColor(sf::Color::Black);
    startButton.setPosition(sf::Vector2f(width / 2 - startButton.getGlobalBounds().width / 2, height / 2 - 50));

    settingsButton.setFont(font);
    settingsButton.setString("Settings");
    settingsButton.setCharacterSize(24);
    settingsButton.setFillColor(sf::Color::Black);
    settingsButton.setPosition(sf::Vector2f(width / 2 - settingsButton.getGlobalBounds().width / 2, height / 2 + 50));
}

void StartMenu::draw(sf::RenderWindow &window) {
    window.draw(startButton);
    window.draw(settingsButton);
}

void StartMenu::handleClick(sf::Vector2f mousePos) {
    // Handle button clicks if needed
}

bool StartMenu::isStartClicked(sf::Vector2f mousePos) {
    return startButton.getGlobalBounds().contains(mousePos);
}

bool StartMenu::isSettingsClicked(sf::Vector2f mousePos) {
    return settingsButton.getGlobalBounds().contains(mousePos);
}