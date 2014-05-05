#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
#include <string>

class Player
{
private:
	std::vector <Card> hand;
public:
	Player();
	~Player();
	
	void add_to_hand(Card);
	Card remove_from_hand(int);

	void display_hand();
	int get_hand_size();

};

#endif