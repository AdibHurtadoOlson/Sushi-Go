#include "Cards/MakiRoll.h"

MakiRoll::MakiRoll(int rollCount) : Card("Maki Roll", sf::Color::Green, 50, 70), rollCount(rollCount) {}

int MakiRoll::getPoints() const {
    // Points calculation logic for Maki Roll
    return rollCount; // Example: Points based on roll count
}

Card::Type MakiRoll::getType() const {
    return ROLLS;
}

int MakiRoll::getRollCount() const {
    return rollCount;
}
