#include "Cards/Pudding.h"

Pudding::Pudding() : Card("Pudding", sf::Color::Yellow, 50, 70) {}

int Pudding::getPoints() const {
    // Points calculation logic for Pudding
    return 0; // Example: Points at the end of the game
}

Card::Type Pudding::getType() const {
    return DESSERT;
}