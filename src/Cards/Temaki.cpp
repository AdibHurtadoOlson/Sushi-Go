#include "Cards/Temaki.h"

Temaki::Temaki() : Card("Temaki", sf::Color::Magenta, 50, 70) {}

int Temaki::getPoints() const {
    // Points calculation logic for Temaki
    return 0; // Example: Points based on most/least cards
}

Card::Type Temaki::getType() const {
    return ROLLS;
}