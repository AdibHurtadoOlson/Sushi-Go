#ifndef ONIGIRI_H
#define ONIGIRI_H

#include "Card.h"

class Onigiri : public Card {
public:
    enum Shape { CIRCLE, TRIANGLE, SQUARE, RECTANGLE };
    Onigiri(Shape shape);
    int getPoints() const override;

private:
    Shape shape;
};

#endif // ONIGIRI_H