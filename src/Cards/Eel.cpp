#include "Cards/Eel.h"

Eel::Eel() : Card("Eel", sf::Color::Blue, 50, 70) {}

int Eel::getPoints() const {
    // Points calculation logic for Eel
    return 0; // Example: Points based on specific game rules
}

Card::Type Eel::getType() const {
    return APPETIZER;
}