#ifndef CHOPSTICKS_H
#define CHOPSTICKS_H

#include "Card.h"

class Chopsticks : public Card {
public:
    Chopsticks();
    int getPoints() const override;
    Type getType() const override;
};

#endif // CHOPSTICKS_H