#ifndef FRUIT_H
#define FRUIT_H

#include "Card.h"

class Fruit : public Card {
public:
    Fruit();
    int getPoints() const override;
    Type getType() const override;
};

#endif // FRUIT_H