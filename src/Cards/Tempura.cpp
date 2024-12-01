#include "Cards/Tempura.h"

Tempura::Tempura() : Card("Tempura", sf::Color::Yellow, 50, 70) {}

int Tempura::getPoints() const {
    // Points calculation logic for Tempura
    return 0; // Example: Points based on pairs
}

Card::Type Tempura::getType() const {
    return APPETIZER;
}
