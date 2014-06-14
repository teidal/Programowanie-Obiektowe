#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Deck.h"

class Player
{
private:
	std::vector <Card> hand;
	int points;
	Deck deck;

public:
	
	Player();

	~Player();
	
	void increase_points();
	int get_points();
	void set_points(int);

	void add_to_hand();
	Card remove_from_hand(int);

	void display_hand();
	int get_hand_size();

};

#endif