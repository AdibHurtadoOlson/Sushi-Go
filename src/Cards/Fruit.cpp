#include "Cards/Fruit.h"

Fruit::Fruit() : Card("Fruit", sf::Color::Red, 50, 70) {}

int Fruit::getPoints() const {
    // Points calculation logic for Fruit
    return 0; // Example: Points based on sets
}

Card::Type Fruit::getType() const {
    return DESSERT;
}