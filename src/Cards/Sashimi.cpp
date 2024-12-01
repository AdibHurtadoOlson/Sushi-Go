#include "Cards/Sashimi.h"

Sashimi::Sashimi() : Card("Sashimi", sf::Color::Red, 50, 70) {}

int Sashimi::getPoints() const {
    // Points calculation logic for Sashimi
    return 0; // Example: Points based on sets of three
}

Card::Type Sashimi::getType() const {
    return APPETIZER;
}