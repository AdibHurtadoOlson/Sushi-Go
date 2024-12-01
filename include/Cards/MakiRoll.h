#ifndef MAKIROLL_H
#define MAKIROLL_H

#include "Card.h"

class MakiRoll : public Card {
public:
    MakiRoll(int rollCount);
    int getPoints() const override;
    Type getType() const override;
    int getRollCount() const;

private:
    int rollCount;
};

#endif // MAKIROLL_H