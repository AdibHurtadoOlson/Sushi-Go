#include "Cards/GreenTeaIceCream.h"

GreenTeaIceCream::GreenTeaIceCream() : Card("Green Tea Ice Cream", sf::Color::Green, 50, 70) {}

int GreenTeaIceCream::getPoints() const {
    // Points calculation logic for Green Tea Ice Cream
    return 0; // Example: Points based on sets
}

Card::Type GreenTeaIceCream::getType() const {
    return DESSERT;
}