#include "Cards/Tofu.h"

Tofu::Tofu() : Card("Tofu", sf::Color::Green, 50, 70) {}

int Tofu::getPoints() const {
    // Points calculation logic for Tofu
    return 0; // Example: Points based on number of Tofu cards
}

Card::Type Tofu::getType() const {
    return APPETIZER;
}