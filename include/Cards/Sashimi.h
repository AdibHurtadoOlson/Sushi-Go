#ifndef SASHIMI_H
#define SASHIMI_H

#include "Card.h"

class Sashimi : public Card {
public:
    Sashimi();
    int getPoints() const override;
    Type getType() const override;
};

#endif // SASHIMI_H