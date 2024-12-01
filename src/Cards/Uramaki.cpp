#include "Cards/Uramaki.h"

Uramaki::Uramaki(int rollCount) : Card("Uramaki", sf::Color::Cyan, 50, 70), rollCount(rollCount) {}

int Uramaki::getPoints() const {
    // Points calculation logic for Uramaki
    return rollCount; // Example: Points based on roll count
}

Card::Type Uramaki::getType() const {
    return ROLLS;
}

int Uramaki::getRollCount() const {
    return rollCount;
}
