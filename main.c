#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include "card.h"
#include "game.h"

int main(void)
{
    Card deck[DECK_SIZE];

    srand(time(NULL));

    createDeck(deck);
    shuffleDeck(deck);

    Player players[PLAYER_COUNT];

    displayWelcome();

    displayTeams();

    // Display deal number
    printf("\n------------------------------\n");
    printf("          DEAL NO. 1\n");
    printf("------------------------------\n");

    // Deal cards to players
    dealCards(deck, players);

    // Display your first 4 cards
    printf("\nYour first 4 cards:\n");
    displayCards(players[0].hand, 4);

    // Select trump
    selectTrump();

    // Display all 8 cards
    printf("\nYour 8 cards:\n");
    displayCards(players[0].hand, HAND_SIZE);

    // Display trick number
     printf("\n------------------------------\n");
     printf("          TRICK NO. 1\n");
     printf("------------------------------\n");

    return 0;

}



