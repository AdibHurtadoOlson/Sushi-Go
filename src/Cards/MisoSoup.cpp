#include "Cards/MisoSoup.h"

MisoSoup::MisoSoup() : Card("Miso Soup", sf::Color::Yellow, 50, 70) {}

int MisoSoup::getPoints() const {
    // Points calculation logic for Miso Soup
    return 3; // Example: 3 points if only one Miso Soup is played in a turn
}

Card::Type MisoSoup::getType() const {
    return APPETIZER;
}