#include "Card.h"
using namespace std;

Card::Card(){
    this->rank = 0;
    this->suit = 0;
}

Card::Card(int r, int s)
{
    rank = r;
    suit = s;
}


bool Card::operator<(Card rhs)
{
    if (rank == rhs.rank)
    {
        return true;
    } else {
        return false;
    }
}

string Card::cardConversion() // returns a string specifying the value of the card in the format of “Jack of Hearts”
{
    string cardName = ranks->at(rank) + "of " + suits->at(suit);
    return cardName;
}
