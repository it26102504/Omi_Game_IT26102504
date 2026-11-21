#ifndef CARD_H
#define CARD_H

#define TOTAL_CARDS 32

struct Card
{
    char rank[6];
    int suit;
};

void initializeDeck(struct Card deck[]);
void shuffleDeck(struct Card deck[]);
void displayCard(struct Card card);

#endif

