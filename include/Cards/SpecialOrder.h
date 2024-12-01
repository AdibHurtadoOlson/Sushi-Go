#ifndef SPECIALORDER_H
#define SPECIALORDER_H

#include "Card.h"

class SpecialOrder : public Card {
public:
    SpecialOrder();
    int getPoints() const override;
};

#endif // SPECIALORDER_H