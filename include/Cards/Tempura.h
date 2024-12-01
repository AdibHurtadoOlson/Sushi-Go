#ifndef TEMPURA_H
#define TEMPURA_H

#include "Card.h"

class Tempura : public Card {
public:
    Tempura();
    int getPoints() const override;
    Type getType() const override;
};

#endif // TEMPURA_H
