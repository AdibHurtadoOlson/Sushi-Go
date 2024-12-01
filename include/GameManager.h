#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Deck.h"
#include "Menues/PauseGameMenu.h"

class GameManager {
public:
    GameManager();
    void startGame();
    void addPlayer();
    void draw(sf::RenderWindow &window);
    void handleClick(sf::Vector2f mousePos);
    void handleHover(sf::Vector2f mousePos);
    void update(float deltaTime);
    void handleResize(sf::Vector2u newSize);
    bool isPauseClicked(sf::Vector2f mousePos); // Move this to public

private:
    std::vector<Player> players;
    Deck deck;
    bool isPaused;
    PauseGameMenu pauseMenu;
    sf::Font font;
    sf::Text pauseButton;
    sf::Text timerText;
    sf::Text roundText;
    sf::Text playerText;
    float roundTime;
    const float roundDuration = 60.0f; // Example round duration
    int currentPlayerIndex;
    int roundNumber;
    bool allPlayersPlayed;

    void startNewRound();
};

#endif // GAMEMANAGER_H