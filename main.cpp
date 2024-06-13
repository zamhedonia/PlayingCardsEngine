#include "card.h"
#include "deck.h"
#include <iostream>

void testDraw(){
    std::cout << "[Drawing a random card from a full deck]" << std::endl;
    Deck deck;
    deck.populate(0,0);
    deck.shuffle();
    std::cout << deck.takeCard().toString() << std::endl;
}

void testPrintAll(){
    std::cout << "[Drawing and printing all cards in order]" << std::endl;
    Deck deck;
    deck.populate(0,0);
    int numCards = deck.getNumCards();
    for (int i = numCards - 1; i >= 0; i--){
        std::cout << deck.takeCard().toString() << std::endl;
    }
}

void testPrintShortWithJoker(){
    std::cout << "[Drawing and printing a 4 times low-shortened deck of cards with 3 Jokers in order]" << std::endl;
    Deck deck;
    deck.populate(4,3);
    int numCards = deck.getNumCards();
    for (int i = numCards - 1; i >= 0; i--){
        std::cout << deck.takeCard().toString() << std::endl;
    }
}

void testPrintShuffle(){
    std::cout << "[Drawing and printing all cards shuffled using system time]" << std::endl;
    Deck deck;
    deck.populate(0,0);
    deck.shuffle();
    int numCards = deck.getNumCards();
    for (int i = numCards - 1; i >= 0; i--){
        std::cout << deck.takeCard().toString() << std::endl;
    }
}

int main(){
    testDraw();
    testPrintAll();
    testPrintShortWithJoker();
    testPrintShuffle();
    return 0;
}
