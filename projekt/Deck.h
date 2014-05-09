#ifndef DECK_H
#define DECK_H
#include <vector>
#include "Card.h"

class Deck
{
private:
	std::vector <Card> deck;

public:
	Deck();
	~Deck();

	void display_deck(); //wyswietlanie+
	void shuffle_deck(); //tasowanie+
	void shift_deck(unsigned int); //przelozenie+

	void add_top_deck(Card); //dodanie do konca+
	Card remove_top_deck(); //usuniecie z konca+
	Card remove_target_deck(int); //usuniecie dowolnego+
	void add_to_deck(int, Card); //dodanie do dowolnego+
	
	int get_size();
	
	Deck divide_deck(int); //podzielenie+
	void operator+ (Deck const&); //polaczenie+
};


#endif