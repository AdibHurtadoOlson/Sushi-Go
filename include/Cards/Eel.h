#ifndef EEL_H
#define EEL_H

#include "Card.h"

class Eel : public Card {
public:
    Eel();
    int getPoints() const override;
};

#endif // EEL_H