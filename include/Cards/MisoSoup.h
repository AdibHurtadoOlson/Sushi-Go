#ifndef MISOSOUP_H
#define MISOSOUP_H

#include "Card.h"

class MisoSoup : public Card {
public:
    MisoSoup();
    int getPoints() const override;
    Type getType() const override;
};

#endif // MISOSOUP_H