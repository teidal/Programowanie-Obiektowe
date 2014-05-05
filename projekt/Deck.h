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
	void shift_deck(); //przelozenie

	void add_top(Card); //dodanie do konca+
	Card remove_top(); //usuniecie z konca+
	Card remove_target(int); //usuniecie dowolnego+
	void add_to_deck(int, Card); //dodanie do dowolnego+
	
	int get_size();
	
	Deck divide_deck(int); //podzielenie+
	void operator+ (Deck const&); //polaczenie+
};


#endif