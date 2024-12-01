#include "Nigiri.h"

Nigiri::Nigiri(Type type) : type(type) {}

int Nigiri::getPoints() const {
    switch (type) {
        case EGG: return 1;
        case SALMON: return 2;
        case SQUID: return 3;
        default: return 0;
    }
}
