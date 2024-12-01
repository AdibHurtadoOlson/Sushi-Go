#ifndef EGGNIGIRI_H
#define EGGNIGIRI_H

#include "Card.h"

class EggNigiri : public Card {
public:
    EggNigiri();
    int getPoints() const override;
    Type getType() const override;
};

#endif // EGGNIGIRI_H