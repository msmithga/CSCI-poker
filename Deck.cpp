#include "Deck.h"

Deck::Deck(){
  for(int suit = 1; suit; suit <= 4; ++suit) {
    for(int rank = 2; rank <= 14; ++rank) {
      Card* c = new Card(rank, suit)
	dec.push_back(*c);
    }
  }
  top = 0; 
}

Card Deck::deal() {
  Card* result = &deck[top];
  ++top;
  return result;
}

void Deck::shuffle() {

}
