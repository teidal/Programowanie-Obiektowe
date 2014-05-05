#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	
}

Player::~Player()
{

}

void Player::add_to_hand(Card card)
{
	hand.push_back(card);
}

Card Player::remove_from_hand(int n)
{
	Card holder = hand[n];
	hand.erase(hand.begin() + n);
	return holder;
}

void Player::display_hand()
{
	std::cout << "Your hand: \n";
	for (unsigned int i = 0; i < hand.size(); i++)
	{
		std::cout << hand[i].get_name() << "  " 
		<< hand[i].get_power() << "/" << hand[i].get_health();
	}
}
int Player::get_hand_size()
{
	return hand.size();
}