#include "Cards/EggNigiri.h"

EggNigiri::EggNigiri() : Card("Egg Nigiri", sf::Color::Yellow, 50, 70) {}

int EggNigiri::getPoints() const {
    return 1; // Egg Nigiri is worth 1 point
}

Card::Type EggNigiri::getType() const {
    return NIGIRI;
}