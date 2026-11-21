#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "card.h"


// Create all 32 cards
void initializeDeck(struct Card deck[])
{
    char ranks[8][6] = {
        "7", "8", "9", "10",
        "Jack", "Queen", "King", "Ace"
    };

    int index = 0;

    for (int suit = 1; suit <= 4; suit++)
    {
        for (int rank = 0; rank < 8; rank++)
        {
            strcpy(deck[index].rank, ranks[rank]);

            deck[index].suit = suit;

            index++;
        }
    }
}


// Shuffle the cards
void shuffleDeck(struct Card deck[])
{
    struct Card temp;
    int randomPosition;

    for (int i = TOTAL_CARDS - 1; i > 0; i--)
    {
        randomPosition = rand() % (i + 1);

        temp = deck[i];
        deck[i] = deck[randomPosition];
        deck[randomPosition] = temp;
    }
}


// Display one card
void displayCard(struct Card card)
{
    char suits[4][10] = {
        "Clubs", "Diamonds", "Hearts", "Spades"
    };

    printf("%s of %s", card.rank, suits[card.suit - 1]);
}
