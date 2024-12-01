#include "Deck.h"
#include <algorithm>
#include <random>
#include <ctime>

Deck::Deck() {
    // Add a mix of different cards to the deck
    for (int i = 0; i < 10; ++i) {
        cards.push_back(std::make_shared<EggNigiri>());
        cards.push_back(std::make_shared<SalmonNigiri>());
        cards.push_back(std::make_shared<SquidNigiri>());
        cards.push_back(std::make_shared<MakiRoll>(1)); // Example roll count
        cards.push_back(std::make_shared<Temaki>());
        cards.push_back(std::make_shared<Uramaki>(1)); // Example roll count
        cards.push_back(std::make_shared<Tempura>());
        cards.push_back(std::make_shared<Sashimi>());
        cards.push_back(std::make_shared<Dumpling>());
        cards.push_back(std::make_shared<Tofu>());
        cards.push_back(std::make_shared<Onigiri>(Onigiri::CIRCLE)); // Example shape
        cards.push_back(std::make_shared<Edamame>());
        cards.push_back(std::make_shared<MisoSoup>());
        cards.push_back(std::make_shared<Eel>());
        cards.push_back(std::make_shared<Wasabi>());
        cards.push_back(std::make_shared<Tea>());
        cards.push_back(std::make_shared<Chopsticks>());
        cards.push_back(std::make_shared<Menu>());
        cards.push_back(std::make_shared<Spoon>());
        cards.push_back(std::make_shared<TakeoutBox>());
        cards.push_back(std::make_shared<SoySauce>());
        cards.push_back(std::make_shared<SpecialOrder>());
        cards.push_back(std::make_shared<GreenTeaIceCream>());
        cards.push_back(std::make_shared<Pudding>());
        cards.push_back(std::make_shared<Fruit>());
    }

    shuffle();
}

void Deck::shuffle() {
    std::srand(unsigned(std::time(0)));
    std::random_shuffle(cards.begin(), cards.end());
}

std::shared_ptr<Card> Deck::drawCard() {
    if (cards.empty()) {
        return nullptr;
    }
    std::shared_ptr<Card> card = cards.back();
    cards.pop_back();
    return card;
}

void Deck::draw(sf::RenderWindow &window) {
    float x = 50;
    float y = 50;
    for (const auto &card : cards) {
        card->draw(window, x, y);
        x += 110; // Adjust spacing between cards
        if (x > window.getSize().x - 100) {
            x = 50;
            y += 160; // Move to next row
        }
    }
}