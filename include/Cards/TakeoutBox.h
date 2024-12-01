#ifndef TAKEOUTBOX_H
#define TAKEOUTBOX_H

#include "Card.h"

class TakeoutBox : public Card {
public:
    TakeoutBox();
    int getPoints() const override;
};

#endif // TAKEOUTBOX_H