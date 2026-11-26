#include<stdio.h>
#include<stdlib.h>
#include "card.h"

// Create all 32 cards
void createDeck(Card deck[])
{
	char suits[] = 
	{
		'H', 'D', 'C', 'S' // Hearts, Diamonds, Clubs, Spades
	};
    int index = 0;

// Go through all suits and ranks to create deck
    for (int s = 0; s < 4; s++)
    {
        for (int r = 7; r <= 14; r++)
       	{
            deck[index].suit = suits[s];
            deck[index].rank = r;
            index++;
        }
    }
}

// Randomly shuffles the 32 cards (Fisher Yates shuffle)
void shuffleDeck(Card deck[])
{
    for (int i = DECK_SIZE - 1; i > 0; i--)
    {
        int j = rand() % (i + 1); // Pick a random index from 0 to i

	// Swap 2 cards
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// Print selection number
void displayCards(Card cards[], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (count > 1)
       	{
            printf("%d ", i + 1);
        }

	// Convert 11-14 into card names
        switch (cards[i].rank)
       	{
            case 11: printf("Jack"); break;
            case 12: printf("Queen"); break;
            case 13: printf("King"); break;
            case 14: printf("Ace"); break;
            default: printf("%d", cards[i].rank); break;
        }

        printf(" of ");

	// Convert suit letters
        switch (cards[i].suit)
       	{
            case 'H': printf("Hearts"); break;
            case 'D': printf("Diamonds"); break;
            case 'C': printf("Clubs"); break;
            case 'S': printf("Spades"); break;
        }

        printf("\n");
    }
}
