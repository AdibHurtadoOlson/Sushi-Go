#ifndef DUMPLING_H
#define DUMPLING_H

#include "Card.h"

class Dumpling : public Card {
public:
    Dumpling();
    int getPoints() const override;
    Type getType() const override;
};

#endif // DUMPLING_H
