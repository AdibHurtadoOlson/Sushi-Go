#include "Cards/SquidNigiri.h"

SquidNigiri::SquidNigiri() : Card("Squid Nigiri", sf::Color::Blue, 50, 70) {}

int SquidNigiri::getPoints() const {
    return 3; // Squid Nigiri is worth 3 points
}

Card::Type SquidNigiri::getType() const {
    return NIGIRI;
}
