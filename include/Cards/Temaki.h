#ifndef TEMAKI_H
#define TEMAKI_H

#include "Card.h"

class Temaki : public Card {
public:
    Temaki();
    int getPoints() const override;
    Type getType() const override;
};

#endif // TEMAKI_H
