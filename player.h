#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

#define PLAYER_COUNT 4
#define HAND_SIZE 8

// Store information about each player
struct Player
{
	char name[20];
	struct Card hand[HAND_SIZE];
	int cardCount;
};

// Distribute cards from the deck to players
void dealCards(struct Card deck[], struct Player players[], int startCard, int cardsPerPlayer0;

// Display all the cards in a player's hand
void displayHand(struct Player player);

// Remove a selected card from a player's hand
struct Card removeCard(struct Player players[], int playerIndex, int cardIndex);

#endif

