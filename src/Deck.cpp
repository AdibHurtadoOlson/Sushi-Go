#include "Deck.h"
#include <algorithm>
#include <random>
#include <ctime>

Deck::Deck() {
    // Hard-code 100 cards with a mix of Tempura, Sashimi, and Dumpling
    for (int i = 0; i < 40; ++i) {
        cards.push_back(std::make_shared<Tempura>(100, 150));
    }
    for (int i = 0; i < 30; ++i) {
        cards.push_back(std::make_shared<Sashimi>(100, 150));
    }
    for (int i = 0; i < 30; ++i) {
        cards.push_back(std::make_shared<Dumpling>(100, 150));
    }

    shuffle();
}

void Deck::shuffle() {
    std::srand(unsigned(std::time(0)));
    std::random_shuffle(cards.begin(), cards.end());
}

std::shared_ptr<Card> Deck::drawCard() {
    if (cards.empty()) {
        return nullptr;
    }
    std::shared_ptr<Card> card = cards.back();
    cards.pop_back();
    return card;
}

void Deck::draw(sf::RenderWindow &window) {
    float x = 50;
    float y = 50;
    for (const auto &card : cards) {
        card->draw(window, x, y);
        x += 110; // Adjust spacing between cards
        if (x > window.getSize().x - 100) {
            x = 50;
            y += 160; // Move to next row
        }
    }
}