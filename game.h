#ifndef GAME_H
#define GAME_H

#include "card.h"

#define PLAYER_COUNT 4
#define HAND_SIZE 8

// Structure to store player information
typedef struct
{
    int playerNo; // Store the player's number
    Card hand[HAND_SIZE]; // Store the player's 8 cards

} Player;

// Display the welcome message
void displayWelcome(void);

// Display the teams and players
void displayTeams(void);

// Give 8 cards to each player
void dealCards(Card deck[], Player players[]);

// Trump selection
void selectTrump(void);

#endif
