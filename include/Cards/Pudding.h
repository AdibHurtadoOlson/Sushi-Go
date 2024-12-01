#ifndef PUDDING_H
#define PUDDING_H

#include "Card.h"

class Pudding : public Card {
public:
    Pudding();
    int getPoints() const override;
    Type getType() const override;
};

#endif // PUDDING_H