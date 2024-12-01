#include "PauseGameMenu.h"

PauseGameMenu::PauseGameMenu(float width, float height) {
    if (!font.loadFromFile("resources/fonts/arial_narrow_7.ttf")) {
        // Handle error
    }

    background.setSize(sf::Vector2f(width, height));
    background.setFillColor(sf::Color(0, 0, 0, 128)); // 50% opacity

    resumeButton.setFont(font);
    resumeButton.setString("Resume");
    resumeButton.setCharacterSize(24);
    resumeButton.setFillColor(sf::Color::White);
    resumeButton.setPosition(sf::Vector2f(width / 2 - resumeButton.getGlobalBounds().width / 2, height / 2 - 50));

    exitButton.setFont(font);
    exitButton.setString("Exit");
    exitButton.setCharacterSize(24);
    exitButton.setFillColor(sf::Color::White);
    exitButton.setPosition(sf::Vector2f(width / 2 - exitButton.getGlobalBounds().width / 2, height / 2 + 50));
}

void PauseGameMenu::draw(sf::RenderWindow &window) {
    window.draw(background);
    window.draw(resumeButton);
    window.draw(exitButton);
}

void PauseGameMenu::handleClick(sf::Vector2f mousePos) {
    // Handle button clicks if needed
}

bool PauseGameMenu::isResumeClicked(sf::Vector2f mousePos) {
    return resumeButton.getGlobalBounds().contains(mousePos);
}

bool PauseGameMenu::isExitClicked(sf::Vector2f mousePos) {
    return exitButton.getGlobalBounds().contains(mousePos);
}