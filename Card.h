#ifndef BLINDMANSBLUFF_CARD_H
#define BLINDMANSBLUFF_CARD_H

#include <string>
using namespace std;

// ranks are ordered Ace-low and Queen-high
const string ranks[] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","King","Queen"};
// suits are ordered alphabetically
const string suits[] = {"Clubs","Diamonds","Hearts","Spades"};

class Card {
public :
    int rank;
    int suit;
    Card();
    Card(int r, int s);
    bool operator < (Card rjs);
    string cardConversion ();

};

#endif //BLINDMANSBLUFF_CARD_H
