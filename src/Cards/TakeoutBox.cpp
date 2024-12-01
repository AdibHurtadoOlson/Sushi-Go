#include "Cards/TakeoutBox.h"

TakeoutBox::TakeoutBox() : Card("Takeout Box", sf::Color::Yellow, 50, 70) {}

int TakeoutBox::getPoints() const {
    // Points calculation logic for Takeout Box
    return 0; // Example: Points based on discarded cards
}

Card::Type TakeoutBox::getType() const {
    return SPECIAL;
}