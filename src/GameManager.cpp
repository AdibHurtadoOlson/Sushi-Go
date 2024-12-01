#include "GameManager.h"

GameManager::GameManager() : deck(DeckType::MyFirstMeal), isPaused(false), pauseMenu(800, 600), roundTime(roundDuration), currentPlayerIndex(0), roundNumber(1), allPlayersPlayed(false) {
    if (!font.loadFromFile("resources/fonts/arial_narrow_7.ttf")) {
        // Handle error
    }

    pauseButton.setFont(font);
    pauseButton.setString("Pause");
    pauseButton.setCharacterSize(24);
    pauseButton.setFillColor(sf::Color::Black);
    pauseButton.setPosition(sf::Vector2f(700, 10)); // Top right corner

    timerText.setFont(font);
    timerText.setCharacterSize(24);
    timerText.setFillColor(sf::Color::Black);
    timerText.setPosition(sf::Vector2f(10, 40)); // Below round counter

    roundText.setFont(font);
    roundText.setCharacterSize(24);
    roundText.setFillColor(sf::Color::Black);
    roundText.setPosition(sf::Vector2f(10, 10)); // Top left corner
    roundText.setString("Round: " + std::to_string(roundNumber));

    playerText.setFont(font);
    playerText.setCharacterSize(24);
    playerText.setFillColor(sf::Color::Black);
    playerText.setPosition(sf::Vector2f(700, 40)); // Below pause button
}

void GameManager::startGame() {
    // Start with one player
    players.emplace_back();

    // Draw the top five cards from the deck for the player
    for (int i = 0; i < 5; ++i) {
        players[0].addCurrentCard(deck.drawCard());
    }

    playerText.setString("Players: " + std::to_string(players.size()));
}

void GameManager::addPlayer() {
    players.emplace_back();
    for (int i = 0; i < 5; ++i) {
        players.back().addCurrentCard(deck.drawCard());
    }
    playerText.setString("Players: " + std::to_string(players.size()));
}

void GameManager::draw(sf::RenderWindow &window) {
    if (isPaused) {
        pauseMenu.draw(window);
    } else {
        float x = 50; // Starting x position for current cards
        float y = window.getSize().y - 160; // Bottom position for current cards
        for (auto &player : players) {
            player.drawCurrentCards(window, x, y);
            player.drawMainPlayedCards(window, 50, window.getSize().y - 320); // Lower position for main played cards
            player.drawSidePlayedCards(window, 650, 50); // Right position for side played cards
        }
        window.draw(pauseButton);
        window.draw(timerText);
        window.draw(roundText);
        window.draw(playerText);
    }
}

void GameManager::handleClick(sf::Vector2f mousePos) {
    if (isPaused) {
        pauseMenu.handleClick(mousePos);
    } else {
        if (isPauseClicked(mousePos)) {
            isPaused = true;
        } else {
            players[currentPlayerIndex].handleCardClick(mousePos);
            allPlayersPlayed = true;
            for (const auto &player : players) {
                if (!player.hasPlayedCard()) {
                    allPlayersPlayed = false;
                    break;
                }
            }
            if (allPlayersPlayed || (players.size() == 1 && players[0].hasPlayedCard())) {
                startNewRound();
            }
        }
    }
}

void GameManager::handleHover(sf::Vector2f mousePos) {
    if (!isPaused) {
        players[currentPlayerIndex].handleCardHover(mousePos);
    }
}

bool GameManager::isPauseClicked(sf::Vector2f mousePos) {
    return pauseButton.getGlobalBounds().contains(mousePos);
}

void GameManager::update(float deltaTime) {
    if (!isPaused) {
        roundTime -= deltaTime;
        if (roundNumber == 1 && roundTime <= 0) {
            roundTime = roundDuration;
        } else if (roundTime <= 0) {
            startNewRound();
        } else {

        }
        timerText.setString("Time: " + std::to_string(static_cast<int>(roundTime)));
    }
}

void GameManager::startNewRound() {
    roundTime = roundDuration;
    roundNumber++;
    roundText.setString("Round: " + std::to_string(roundNumber));
    for (auto &player : players) {
        player.resetPlayedCard();
    }
    if (players.size() == 1) {
        players[0].deselectCard();
        std::vector<std::shared_ptr<Card>> newHand;
        for (int i = 0; i + roundNumber - 1 < 5; ++i) { // Generate a new hand with one less card
            newHand.push_back(deck.drawCard());
        }
        players[0].setCurrentHand(newHand);
    } else {
        std::vector<std::shared_ptr<Card>> tempHand = players[0].getCurrentHand();
        for (size_t i = 0; i < players.size() - 1; ++i) {
            players[i].setCurrentHand(players[i + 1].getCurrentHand());
        }
        players.back().setCurrentHand(tempHand);
    }
}