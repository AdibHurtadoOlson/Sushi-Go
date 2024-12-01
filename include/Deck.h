#ifndef DECK_H
#define DECK_H

#include <vector>
#include <memory>
#include "Card.h"
#include "Tempura.h"
#include "Sashimi.h"
#include "Dumpling.h"

class Deck {
public:
    Deck();
    void shuffle();
    std::shared_ptr<Card> drawCard();
    void draw(sf::RenderWindow &window);

private:
    std::vector<std::shared_ptr<Card>> cards;
    sf::Font font;
};

#endif // DECK_H
