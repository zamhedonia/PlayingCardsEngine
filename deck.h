#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <random>

class Deck {
public:
    Deck();
    int getNumCards() const;
    void populate(int shorten, int jokers);
    Card drawCard();
    void addCard(Card card);
    void shuffle();
    virtual ~Deck();
private:
    std::vector<Card> deck;
    unsigned int seed;
    std::default_random_engine e;
};

#endif // DECK_H
