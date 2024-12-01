#include "Cards/SoySauce.h"

SoySauce::SoySauce() : Card("Soy Sauce", sf::Color(165,42,42), 50, 70) {}

int SoySauce::getPoints() const {
    // Points calculation logic for Soy Sauce
    return 0; // Example: Points based on variety of cards
}

Card::Type SoySauce::getType() const {
    return SPECIAL;
}