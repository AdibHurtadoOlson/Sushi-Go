#include "Cards/Edamame.h"

Edamame::Edamame() : Card("Edamame", sf::Color::Green, 50, 70) {}

int Edamame::getPoints() const {
    // Points calculation logic for Edamame
    return 0; // Example: Points based on number of players
}

Card::Type Edamame::getType() const {
    return APPETIZER;
}