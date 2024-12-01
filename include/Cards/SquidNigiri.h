#ifndef SQUIDNIGIRI_H
#define SQUIDNIGIRI_H

#include "Card.h"

class SquidNigiri : public Card {
public:
    SquidNigiri();
    int getPoints() const override;
    Type getType() const override;
};

#endif // SQUIDNIGIRI_H