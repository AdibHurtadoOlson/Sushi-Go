#ifndef NIGIRI_H
#define NIGIRI_H

#include "Card.h"

class Nigiri : public Card {
public:
    enum Type { EGG, SALMON, SQUID };
    Nigiri(Type type);
    int getPoints() const override;

private:
    Type type;
};

#endif // NIGIRI_H
