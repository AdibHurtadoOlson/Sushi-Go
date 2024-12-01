#ifndef TOFU_H
#define TOFU_H

#include "Card.h"

class Tofu : public Card {
public:
    Tofu();
    int getPoints() const override;
    Type getType() const override;
};

#endif // TOFU_H