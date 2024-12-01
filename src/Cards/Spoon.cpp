#include "Cards/Spoon.h"

Spoon::Spoon() : Card("Spoon", sf::Color::Green, 50, 70) {}

int Spoon::getPoints() const {
    // Points calculation logic for Spoon
    return 0; // Example: Allows taking a card from another player
}

Card::Type Spoon::getType() const {
    return SPECIAL;
}