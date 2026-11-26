#ifndef CARD_H
#define CARD_H

#define DECK_SIZE 32

// Structure to store  one playing card
typedef struct
{
	char suit; // 'H'= Hearts, 'D' = Diamonds, 'C' = Clubs, 'S' = Spades
	int rank; // 7, 8, 9, 10, 11 (Jack), 12 (Queen), 13 (King), 14 (Ace)
} Card;

// Function declaration of deck creation, shuffling and displaying cards
void createDeck(Card deck[]);
void shuffleDeck(Card deck[]);
void displayCards(Card cards[], int count);

#endif
