#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    Card(std::string rank, std::string suit);
    std::string getRank() const;
    std::string getSuit() const;
    std::string toString() const;
    virtual ~Card();
private:
    std::string rank;
    std::string suit;
};

#endif // CARD_H
