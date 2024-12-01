#ifndef URAMAKI_H
#define URAMAKI_H

#include "Card.h"

class Uramaki : public Card {
public:
    Uramaki(int rollCount);
    int getPoints() const override;
    Type getType() const override;
    int getRollCount() const;

private:
    int rollCount;
};

#endif // URAMAKI_H