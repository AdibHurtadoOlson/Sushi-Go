#ifndef TEA_H
#define TEA_H

#include "Card.h"

class Tea : public Card {
public:
    Tea();
    int getPoints() const override;
    Type getType() const override;
};

#endif // TEA_H