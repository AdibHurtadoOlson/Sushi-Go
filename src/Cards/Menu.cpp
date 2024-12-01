#include "Cards/Menu.h"

Menu::Menu() : Card("Menu", sf::Color::Blue, 50, 70) {}

int Menu::getPoints() const {
    // Points calculation logic for Menu
    return 0; // Example: Allows swapping cards
}

Card::Type Menu::getType() const {
    return SPECIAL;
}