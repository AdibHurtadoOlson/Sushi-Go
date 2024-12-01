#ifndef SPOON_H
#define SPOON_H

#include "Card.h"

class Spoon : public Card {
public:
    Spoon();
    int getPoints() const override;
};

#endif // SPOON_H