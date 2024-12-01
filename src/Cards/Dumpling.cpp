#include "Cards/Dumpling.h"

Dumpling::Dumpling() : Card("Dumpling", sf::Color(173, 216, 230), 50, 70) {}

int Dumpling::getPoints() const {
    // Points calculation logic for Dumpling
    return 0; // Example: Points based on number of dumpling
}

Card::Type Dumpling::getType() const {
    return APPETIZER;
}