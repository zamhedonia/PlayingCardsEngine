#include "card.h"

Card::Card(std::string rank, std::string suit) : rank(rank), suit(suit) {}

std::string Card::getRank() const {
    return rank;
}

std::string Card::getSuit() const {
    return suit;
}

std::string Card::toString() const {
    return suit + " " + rank;
}

Card::~Card() {

}
