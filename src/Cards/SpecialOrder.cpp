#include "Cards/SpecialOrder.h"

SpecialOrder::SpecialOrder() : Card("Special Order", sf::Color(128, 0, 128), 50, 70) {}

int SpecialOrder::getPoints() const {
    // Points calculation logic for Special Order
    return 0; // Example: Allows copying another card's effect
}

Card::Type SpecialOrder::getType() const {
    return SPECIAL;
}
