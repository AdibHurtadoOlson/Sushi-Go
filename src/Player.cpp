#include "Player.h"

Player::Player() : selectedCard(nullptr), playedCard(false) {
}

void Player::drawCurrentCards(sf::RenderWindow &window, float x, float y) {
    for (const auto &card : currentCards) {
        if (card == selectedCard && !playedCard) {
            card->draw(window, x, y - 20); // Move up when selected
        } else {
            card->draw(window, x, y);
        }
        x += 110; // Adjust spacing between cards
    }
}

void Player::drawMainPlayedCards(sf::RenderWindow &window, float x, float y) {
    std::map<std::string, int> cardCount;
    for (const auto &card : mainPlayedCards) {
        card->draw(window, x, y - cardCount[card->getName()] * 10); // Stack cards of the same type
        cardCount[card->getName()]++;
        x += 110; // Adjust spacing between cards
    }
}

void Player::drawSidePlayedCards(sf::RenderWindow &window, float x, float y) {
    for (const auto &card : sidePlayedCards) {
        card->draw(window, x, y);
        y += 160; // Adjust spacing between cards
    }
}

void Player::addCurrentCard(std::shared_ptr<Card> card) {
    if (currentCards.size() < 5) {
        currentCards.push_back(card);
    }
}

void Player::playMainCard(std::shared_ptr<Card> card) {
    mainPlayedCards.push_back(card);
    playedCard = true;
}

void Player::playSideCard(std::shared_ptr<Card> card) {
    sidePlayedCards.push_back(card);
}

void Player::handleCardClick(sf::Vector2f mousePos) {
    if (!playedCard) {
        for (const auto &card : currentCards) {
            if (card->getGlobalBounds().contains(mousePos)) {
                playMainCard(card);
                currentCards.erase(std::remove(currentCards.begin(), currentCards.end(), card), currentCards.end());
                selectedCard = nullptr;
                break;
            }
        }
    }
}

void Player::handleCardHover(sf::Vector2f mousePos) {
    if (!playedCard) {
        for (const auto &card : currentCards) {
            if (card->getGlobalBounds().contains(mousePos)) {
                selectedCard = card;
                return;
            }
        }
    }
    selectedCard = nullptr;
}

void Player::deselectCard() {
    selectedCard = nullptr;
}

bool Player::isCardSelected() const {
    return selectedCard != nullptr;
}

bool Player::hasPlayedCard() const {
    return playedCard;
}

void Player::resetPlayedCard() {
    playedCard = false;
}

std::vector<std::shared_ptr<Card>> Player::getCurrentHand() const {
    return currentCards;
}

void Player::setCurrentHand(const std::vector<std::shared_ptr<Card>> &hand) {
    currentCards = hand;
}