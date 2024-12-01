#include "Cards/Wasabi.h"

Wasabi::Wasabi() : Card("Wasabi", sf::Color::Green, 50, 70) {}

int Wasabi::getPoints() const {
    // Points calculation logic for Wasabi
    return 0; // Example: Points based on combination with Nigiri
}

Card::Type Wasabi::getType() const {
    return SPECIAL;
}