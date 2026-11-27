#include <stdio.h>
#include "game.h"

// Display welcome screen
void displayWelcome(void)
{
    printf("==============================\n");
    printf("      WELCOME TO OMI GAME\n");
    printf("==============================\n");
}

// Display teams and players
void displayTeams(void)
{
    printf("\nTeams and Players\n");
    printf("------------------------------\n");

    printf("Team 1:\n");
    printf("Player 1 (You)\n");
    printf("Player 3 (Your Partner)\n\n");

    printf("Team 2:\n");
    printf("Player 2 (Computer)\n");
    printf("Player 4 (Computer)\n");

    printf("------------------------------\n");
}

// Deal 8 cards to each player
void dealCards(Card deck[], Player players[])
{
    int index = 0;

    for (int p = 0; p < PLAYER_COUNT; p++)
    {
        // Assign player number
        players[p].playerNo = p + 1;

        // Deal 8 cards
        for (int c = 0; c < HAND_SIZE; c++)
        {
            players[p].hand[c] = deck[index];
            index++;
        }
    }
}

// Select trump suit
void selectTrump(void)
{
    int choice;

    printf("\nSelect the trump suit:\n");
    printf("1. Hearts\n");
    printf("2. Diamonds\n");
    printf("3. Clubs\n");
    printf("4. Spades\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Convert 1-4 into suits
    switch (choice)
    {
        case 1:
            printf("\nTrump selected: Hearts\n");
            break;

        case 2:
            printf("\nTrump selected: Diamonds\n");
            break;

        case 3:
            printf("\nTrump selected: Clubs\n");
            break;

        case 4:
            printf("\nTrump selected: Spades\n");
            break;

        default:
            printf("\nInvalid choice!\n");
            break;
    }
}
