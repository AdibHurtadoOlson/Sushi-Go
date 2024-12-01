#ifndef SOYSAUCE_H
#define SOYSAUCE_H

#include "Card.h"

class SoySauce : public Card {
public:
    SoySauce();
    int getPoints() const override;
};

#endif // SOYSAUCE_H