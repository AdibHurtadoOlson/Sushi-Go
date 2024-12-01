#include "Cards/Onigiri.h"

Onigiri::Onigiri(Shape shape) : Card("Onigiri", sf::Color::Blue, 50, 70), shape(shape) {}

int Onigiri::getPoints() const {
    // Points calculation logic for Onigiri
    return 0; // Example: Points based on unique shapes
}

Card::Type Onigiri::getType() const {
    return APPETIZER;
}
