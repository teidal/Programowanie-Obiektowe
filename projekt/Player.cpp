#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	for (int i = 0; i < 5; i++)
		add_to_hand();
}

Player::~Player()
{
}

void Player::set_points(int points)
{
	this->points = points;
}

int Player::get_points()
{
	return points;
}

void Player::increase_points()
{
	points++;
}

void Player::add_to_hand()
{
	hand.push_back(deck.remove_top_deck());
}

Card Player::remove_from_hand(int n)
{
	Card holder = hand[n-1];
	hand.erase(hand.begin() + n-1);
	return holder;
}

void Player::display_hand()
{
	std::cout << "Your hand: \n";
	for (unsigned int i = 0; i < hand.size(); i++)
	{
		hand[i].display_card();
		std::cout << "\n";
	}
}
int Player::get_hand_size()
{
	return hand.size();
}