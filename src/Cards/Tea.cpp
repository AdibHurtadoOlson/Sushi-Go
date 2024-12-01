#include "Cards/Tea.h"

Tea::Tea() : Card("Tea", sf::Color::Yellow, 50, 70) {}

int Tea::getPoints() const {
    // Points calculation logic for Tea
    return 0; // Example: Points based on other cards
}

Card::Type Tea::getType() const {
    return SPECIAL;
}