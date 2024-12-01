#ifndef SALMONNIGIRI_H
#define SALMONNIGIRI_H

#include "Card.h"

class SalmonNigiri : public Card {
public:
    SalmonNigiri();
    int getPoints() const override;
    Type getType() const override;
};

#endif // SALMONNIGIRI_H