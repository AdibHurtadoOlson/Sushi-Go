#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <memory>
#include "Card.h"

class Player {
public:
    Player();
    void drawCurrentCards(sf::RenderWindow &window, float x, float y);
    void drawMainPlayedCards(sf::RenderWindow &window, float x, float y);
    void drawSidePlayedCards(sf::RenderWindow &window, float x, float y);
    void addCurrentCard(std::shared_ptr<Card> card);
    void playMainCard(std::shared_ptr<Card> card);
    void playSideCard(std::shared_ptr<Card> card);
    void handleCardClick(sf::Vector2f mousePos);
    void handleCardHover(sf::Vector2f mousePos);
    void deselectCard();
    bool isCardSelected() const;
    bool hasPlayedCard() const;
    void resetPlayedCard();
    std::vector<std::shared_ptr<Card>> getCurrentHand() const;
    void setCurrentHand(const std::vector<std::shared_ptr<Card>> &hand);

private:
    std::vector<std::shared_ptr<Card>> currentCards;
    std::vector<std::shared_ptr<Card>> mainPlayedCards;
    std::vector<std::shared_ptr<Card>> sidePlayedCards;
    std::shared_ptr<Card> selectedCard;
    bool playedCard;
};

#endif // PLAYER_H
