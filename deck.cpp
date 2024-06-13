#include "deck.h"
#include <chrono>
#include <algorithm>

// Seed randomness for later shuffle using system time
Deck::Deck() : seed(std::chrono::system_clock::now().time_since_epoch().count()), e(seed) {

}

/*
    Fill the deck with the default 52-card deck,
    shorten the deck from the low side (positive value)
    or from the high side (negative value),
    add jokers
*/
void Deck::populate(int shorten, int jokers){
    std::vector<std::string> ranks = {
      "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"
    };
    std::string suits[] = {
        "Diamonds", "Hearts", "Clubs", "Spades"
    };

    if (shorten > 0){
        // Shorten the deck from lowest rank ascending
        for(int i = shorten; i > 0; i--)
            ranks.erase(ranks.begin());
    } else if (shorten < 0){
        // Shorten the deck from highest rank descending
        for(int i = shorten; i < 0; i++)
            ranks.pop_back();
    }

    // Populate deck
    for (const auto& rank : ranks) {
        for (const auto& suit : suits) {
            deck.emplace_back(rank, suit);
        }
    }

    // Add Jokers
    for (int i = jokers; i > 0; i--){
        Card* newJokerCard = new Card("Joker", "Joker");
        deck.push_back(*newJokerCard);
    }
}

// Take card from the back of the vector
Card Deck::takeCard(){
    Card card = deck.back();
    deck.pop_back();
    return card;
}

// Add card to the back of the vector
void Deck::addCard(Card card){
    deck.push_back(card);
}

int Deck::getNumCards() const {
    return deck.size();
}

void Deck::shuffle(){
    std::shuffle(deck.begin(), deck.end(), e);
}

Deck::~Deck() {

}
