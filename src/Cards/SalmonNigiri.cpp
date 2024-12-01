#include "Cards/SalmonNigiri.h"

SalmonNigiri::SalmonNigiri() : Card("Salmon Nigiri", sf::Color::Red, 50, 70) {}

int SalmonNigiri::getPoints() const {
    return 2; // Salmon Nigiri is worth 2 points
}

Card::Type SalmonNigiri::getType() const {
    return NIGIRI;
}