#ifndef MENU_H
#define MENU_H

#include "Card.h"

class Menu : public Card {
public:
    Menu();
    int getPoints() const override;
    Type getType() const override;
};

#endif // MENU_H
