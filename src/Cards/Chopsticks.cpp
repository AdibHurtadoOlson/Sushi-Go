#include "Cards/Chopsticks.h"

Chopsticks::Chopsticks() : Card("Chopsticks", sf::Color::Red, 50, 70) {}

int Chopsticks::getPoints() const {
    // Points calculation logic for Chopsticks
    return 0; // Example: Allows taking two cards in a turn
}

Card::Type Chopsticks::getType() const {
    return SPECIAL;
}
