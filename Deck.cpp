#include "Deck.h"
#include "ctime"
using namespace std;

Deck::Deck() {
    arraySize = 52;
    cardsLeft = arraySize/2;
    string* deck = new string[arraySize];
    int counter = 0;
    for (int i = 0; i < ranks->size(); ++i){
        for (int j = 0; j < suits->size(); ++j){
            deck[counter] = ranks[i] + " of " + suits[j];
        }
    }
}

void Deck::shuffle() {
    string x;
    string y;
    for (int i=0; i < (cardsLeft^2); i++){
        x = deck[rand()% 51];
        y = deck[rand()% 51];
        string tmp = y;
        y = x;
        tmp = x;
    }

}

void Deck::removeCard(string cardRemoved) {
    string* tmpDeck = new string[arraySize];
    for (int i = 0; i < arraySize; ++i){
        tmpDeck[i] = deck[i];
    }
    //delete[] deck;
    arraySize--;
    //string deck = new string[arraySize];
    for (int i = 0; i < arraySize; ++i){
        if(cardRemoved == deck[i]){
            i++;
        }
         deck[i]= tmpDeck[i];
    }
    delete[] tmpDeck;
}

void Deck::addCard() {

}


