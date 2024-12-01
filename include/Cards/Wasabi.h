#ifndef WASABI_H
#define WASABI_H

#include "Card.h"

class Wasabi : public Card {
public:
    Wasabi();
    int getPoints() const override;
};

#endif // WASABI_H