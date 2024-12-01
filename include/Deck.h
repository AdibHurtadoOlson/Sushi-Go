#ifndef DECK_H
#define DECK_H

#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
#include "Cards/Card.h"
#include "Cards/EggNigiri.h"
#include "Cards/SalmonNigiri.h"
#include "Cards/SquidNigiri.h"
#include "Cards/MakiRoll.h"
#include "Cards/Temaki.h"
#include "Cards/Uramaki.h"
#include "Cards/Tempura.h"
#include "Cards/Sashimi.h"
#include "Cards/Dumpling.h"
#include "Cards/Tofu.h"
#include "Cards/Onigiri.h"
#include "Cards/Edamame.h"
#include "Cards/MisoSoup.h"
#include "Cards/Eel.h"
#include "Cards/Wasabi.h"
#include "Cards/Tea.h"
#include "Cards/Chopsticks.h"
#include "Cards/Menu.h"
#include "Cards/Spoon.h"
#include "Cards/TakeoutBox.h"
#include "Cards/SoySauce.h"
#include "Cards/SpecialOrder.h"
#include "Cards/GreenTeaIceCream.h"
#include "Cards/Pudding.h"
#include "Cards/Fruit.h"

class Deck {
public:
    Deck();
    void shuffle();
    std::shared_ptr<Card> drawCard();
    void draw(sf::RenderWindow &window);

private:
    std::vector<std::shared_ptr<Card>> cards;
    sf::Font font;
};

#endif // DECK_H
