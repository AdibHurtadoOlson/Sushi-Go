#include "StartGameMenu.h"

StartGameMenu::StartGameMenu(float width, float height) {
    if (!font.loadFromFile("resources/fonts/arial_narrow_7.ttf")) {
        // Handle error
    }

    joinNowButton.setFont(font);
    joinNowButton.setString("Join Now");
    joinNowButton.setCharacterSize(24);
    joinNowButton.setFillColor(sf::Color::Black);
    joinNowButton.setPosition(sf::Vector2f(width / 2 - joinNowButton.getGlobalBounds().width / 2, height / 2 - 50));

    backButton.setFont(font);
    backButton.setString("Back");
    backButton.setCharacterSize(24);
    backButton.setFillColor(sf::Color::Black);
    backButton.setPosition(sf::Vector2f(width / 2 - backButton.getGlobalBounds().width / 2, height / 2 + 50));
}

void StartGameMenu::draw(sf::RenderWindow &window) {
    window.draw(joinNowButton);
    window.draw(backButton);
}

void StartGameMenu::handleClick(sf::Vector2f mousePos) {
    // Handle button clicks if needed
}

bool StartGameMenu::isJoinNowClicked(sf::Vector2f mousePos) {
    return joinNowButton.getGlobalBounds().contains(mousePos);
}

bool StartGameMenu::isBackClicked(sf::Vector2f mousePos) {
    return backButton.getGlobalBounds().contains(mousePos);
}
