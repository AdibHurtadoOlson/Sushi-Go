#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Deck.h"
#include "PauseGameMenu.h"
#include "Player.h"

class GameManager {
public:
    GameManager();
    void startGame();
    void draw(sf::RenderWindow &window);
    void handleClick(sf::Vector2f mousePos);
    void handleHover(sf::Vector2f mousePos);
    bool isPauseClicked(sf::Vector2f mousePos);
    void update(float deltaTime);
    void addPlayer(); // Method to add a new player

private:
    Deck deck;
    std::vector<Player> players;
    sf::Font font;
    sf::Text pauseButton;
    sf::Text timerText;
    sf::Text roundText;
    sf::Text playerText;
    bool isPaused;
    PauseGameMenu pauseMenu;
    float roundTime;
    const float roundDuration = 30.0f;
    int currentPlayerIndex;
    int roundNumber;
    bool allPlayersPlayed;
    void startNewRound();
};

#endif // GAMEMANAGER_H