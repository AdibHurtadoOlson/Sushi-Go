#include "Deck.h"
#include <algorithm>
#include <random>
#include <ctime>

Deck::Deck(DeckType type) {
    createDeck(type);
    shuffle();
}

void Deck::createDeck(DeckType type) {
    cards.clear();

    switch (type) {
        case DeckType::MyFirstMeal:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Maki", 12);
            addCards("Tempura", 8);
            addCards("Sashimi", 8);
            addCards("MisoSoup", 8);
            addCards("Wasabi", 3);
            addCards("Tea", 3);
            addCards("GreenTeaIceCream", 15);
            break;

        case DeckType::SushiGo:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Maki", 12);
            addCards("Tempura", 8);
            addCards("Sashimi", 8);
            addCards("Dumpling", 8);
            addCards("Chopsticks", 3);
            addCards("Wasabi", 3);
            addCards("Pudding", 15);
            break;

        case DeckType::PartySampler:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Temaki", 12);
            addCards("Tempura", 8);
            addCards("Dumpling", 8);
            addCards("Tofu", 8);
            addCards("Wasabi", 3);
            addCards("Menu", 3);
            addCards("GreenTeaIceCream", 15);
            break;

        case DeckType::MasterMenu:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Temaki", 12);
            addCards("Onigiri", 8);
            addCards("Tofu", 8);
            addCards("Sashimi", 8);
            addCards("Spoon", 3);
            addCards("TakeoutBox", 3);
            addCards("Fruit", 15);
            break;

        case DeckType::PointsPlatter:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Uramaki", 12);
            addCards("Onigiri", 8);
            addCards("Dumpling", 8);
            addCards("Edamame", 8);
            addCards("SpecialOrder", 3);
            addCards("Tea", 3);
            addCards("GreenTeaIceCream", 15);
            break;

        case DeckType::GutthroatCombo:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Temaki", 12);
            addCards("Eel", 8);
            addCards("Tofu", 8);
            addCards("MisoSoup", 8);
            addCards("Spoon", 3);
            addCards("SoySauce", 3);
            addCards("Pudding", 15);
            break;

        case DeckType::BigBanquet:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Maki", 12);
            addCards("Tempura", 8);
            addCards("Dumpling", 8);
            addCards("Eel", 8);
            addCards("Spoon", 3);
            addCards("Chopsticks", 3);
            addCards("GreenTeaIceCream", 15);
            break;

        case DeckType::DinnerForTwo:
            addCards("EggNigiri", 4);
            addCards("SalmonNigiri", 4);
            addCards("SquidNigiri", 4);
            addCards("Uramaki", 12);
            addCards("Onigiri", 8);
            addCards("Tofu", 8);
            addCards("MisoSoup", 8);
            addCards("Menu", 3);
            addCards("SpecialOrder", 3);
            addCards("Fruit", 15);
            break;

        // Add more custom deck types as needed
    }
}

void Deck::addCards(const std::string& cardName, int count) {
    for (int i = 0; i < count; ++i) {
        if (cardName == "EggNigiri") {
            cards.push_back(std::make_shared<EggNigiri>());
        } else if (cardName == "SalmonNigiri") {
            cards.push_back(std::make_shared<SalmonNigiri>());
        } else if (cardName == "SquidNigiri") {
            cards.push_back(std::make_shared<SquidNigiri>());
        } else if (cardName == "Maki") {
            cards.push_back(std::make_shared<MakiRoll>(1)); // Example roll count
        } else if (cardName == "Tempura") {
            cards.push_back(std::make_shared<Tempura>());
        } else if (cardName == "Sashimi") {
            cards.push_back(std::make_shared<Sashimi>());
        } else if (cardName == "MisoSoup") {
            cards.push_back(std::make_shared<MisoSoup>());
        } else if (cardName == "Wasabi") {
            cards.push_back(std::make_shared<Wasabi>());
        } else if (cardName == "Tea") {
            cards.push_back(std::make_shared<Tea>());
        } else if (cardName == "GreenTeaIceCream") {
            cards.push_back(std::make_shared<GreenTeaIceCream>());
        } else if (cardName == "Dumpling") {
            cards.push_back(std::make_shared<Dumpling>());
        } else if (cardName == "Chopsticks") {
            cards.push_back(std::make_shared<Chopsticks>());
        } else if (cardName == "Pudding") {
            cards.push_back(std::make_shared<Pudding>());
        } else if (cardName == "Temaki") {
            cards.push_back(std::make_shared<Temaki>());
        } else if (cardName == "Tofu") {
            cards.push_back(std::make_shared<Tofu>());
        } else if (cardName == "Menu") {
            cards.push_back(std::make_shared<Menu>());
        } else if (cardName == "Onigiri") {
            cards.push_back(std::make_shared<Onigiri>(Onigiri::CIRCLE)); // Example shape
        } else if (cardName == "Spoon") {
            cards.push_back(std::make_shared<Spoon>());
        } else if (cardName == "TakeoutBox") {
            cards.push_back(std::make_shared<TakeoutBox>());
        } else if (cardName == "Fruit") {
            cards.push_back(std::make_shared<Fruit>());
        } else if (cardName == "Uramaki") {
            cards.push_back(std::make_shared<Uramaki>(1)); // Example roll count
        } else if (cardName == "Edamame") {
            cards.push_back(std::make_shared<Edamame>());
        } else if (cardName == "SpecialOrder") {
            cards.push_back(std::make_shared<SpecialOrder>());
        } else if (cardName == "Eel") {
            cards.push_back(std::make_shared<Eel>());
        } else if (cardName == "SoySauce") {
            cards.push_back(std::make_shared<SoySauce>());
        }
    }
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