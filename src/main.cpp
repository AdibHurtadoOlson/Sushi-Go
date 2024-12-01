#include <SFML/Graphics.hpp>
#include "Menues/StartMenu.h"
#include "Menues/SettingsMenu.h"
#include "Menues/StartGameMenu.h"
#include "GameManager.h"

enum class Screen { START_MENU, SETTINGS_MENU, START_GAME_MENU, GAME, PAUSE_MENU };

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Sushi Go", sf::Style::Resize | sf::Style::Close);

    StartMenu startMenu(window.getSize().x, window.getSize().y);
    SettingsMenu settingsMenu(window.getSize().x, window.getSize().y);
    StartGameMenu startGameMenu(window.getSize().x, window.getSize().y);
    GameManager gameManager;
    PauseGameMenu pauseMenu(window.getSize().x, window.getSize().y);
    Screen currentScreen = Screen::START_MENU;

    sf::Clock clock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
                    if (currentScreen == Screen::START_MENU) {
                        startMenu.handleClick(mousePos);
                        if (startMenu.isStartClicked(mousePos)) {
                            currentScreen = Screen::START_GAME_MENU;
                        } else if (startMenu.isSettingsClicked(mousePos)) {
                            currentScreen = Screen::SETTINGS_MENU;
                        }
                    } else if (currentScreen == Screen::SETTINGS_MENU) {
                        settingsMenu.handleClick(mousePos);
                        if (settingsMenu.isBackClicked(mousePos)) {
                            currentScreen = Screen::START_MENU;
                        }
                    } else if (currentScreen == Screen::START_GAME_MENU) {
                        startGameMenu.handleClick(mousePos);
                        if (startGameMenu.isJoinNowClicked(mousePos)) {
                            gameManager.startGame();
                            currentScreen = Screen::GAME;
                        } else if (startGameMenu.isBackClicked(mousePos)) {
                            currentScreen = Screen::START_MENU;
                        }
                    } else if (currentScreen == Screen::GAME) {
                        gameManager.handleClick(mousePos);
                        if (gameManager.isPauseClicked(mousePos)) {
                            currentScreen = Screen::PAUSE_MENU;
                        }
                    } else if (currentScreen == Screen::PAUSE_MENU) {
                        pauseMenu.handleClick(mousePos);
                        if (pauseMenu.isResumeClicked(mousePos)) {
                            currentScreen = Screen::GAME;
                        } else if (pauseMenu.isExitClicked(mousePos)) {
                            currentScreen = Screen::START_MENU;
                        }
                    }
                }
            }

            if (event.type == sf::Event::MouseMoved) {
                sf::Vector2f mousePos(event.mouseMove.x, event.mouseMove.y);
                if (currentScreen == Screen::GAME) {
                    gameManager.handleHover(mousePos);
                }
            }
        }

        float deltaTime = clock.restart().asSeconds();
        if (currentScreen == Screen::GAME) {
            gameManager.update(deltaTime);
        }

        window.clear(sf::Color::White);
        if (currentScreen == Screen::START_MENU) {
            startMenu.draw(window);
        } else if (currentScreen == Screen::SETTINGS_MENU) {
            settingsMenu.draw(window);
        } else if (currentScreen == Screen::START_GAME_MENU) {
            startGameMenu.draw(window);
        } else if (currentScreen == Screen::GAME) {
            gameManager.draw(window);
        } else if (currentScreen == Screen::PAUSE_MENU) {
            pauseMenu.draw(window);
        }
        window.display();
    }

    return 0;
}