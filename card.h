#ifndef CARD_H
#define CARD_H

// Card suits
typedef enum 
{ 
	CLUBS,
       	DIAMONDS,
       	HEARTS,
       	SPADES
} Suit;

// Card ranks
typedef enum
{
       	SEVEN,
       	EIGHT,
       	NINE,
       	TEN,
       	JACK,
       	QUEEN,
       	KING,
       	ACE
} Rank;

// Card structure
typedef struct
{
    Suit suit;
    Rank rank;
} Card;

// Function declaration
const char* suit_to_string(Suit s);
const char* rank_to_string(Rank r);
void print_card(Card c);

#endif

