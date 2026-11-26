#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include "card.h"

int main(void)
{
    Card deck[DECK_SIZE];

    srand(time(NULL));

    createDeck(deck);
    shuffleDeck(deck);

    displayCards(deck, 4);

    return 0;
}
