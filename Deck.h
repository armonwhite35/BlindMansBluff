#ifndef BLINDMANSBLUFF_DECK_H
#define BLINDMANSBLUFF_DECK_H

#include "Card.h"

class Deck {

private:
    Card* cards;
    int arraySize;
    int cardsLeft;
    string deck[52];

public:
    Deck();
    void shuffle();
    void removeCard(string cardRemoved);
    void addCard();

};




#endif //BLINDMANSBLUFF_DECK_H
