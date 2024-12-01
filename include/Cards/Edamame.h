#ifndef EDAMAME_H
#define EDAMAME_H

#include "Card.h"

class Edamame : public Card {
public:
    Edamame();
    int getPoints() const override;
};

#endif // EDAMAME_H