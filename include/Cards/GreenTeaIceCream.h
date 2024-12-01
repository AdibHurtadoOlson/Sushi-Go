#ifndef GREENTEAICECREAM_H
#define GREENTEAICECREAM_H

#include "Card.h"

class GreenTeaIceCream : public Card {
public:
    GreenTeaIceCream();
    int getPoints() const override;
    Type getType() const override;
};

#endif // GREENTEAICECREAM_H