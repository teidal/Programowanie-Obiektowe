#include "stdafx.h"
#include "Deck.h"
#include <algorithm>

Deck::Deck()
{

}

Deck::~Deck()
{

}

void Deck::display_deck()
{
	for (unsigned int i = 0; i < deck.size(); i++)
	{
		std::cout << "Twoja talia: \n" << deck[i].get_name() << "  "
			<< deck[i].get_power() << "/" << deck[i].get_health() << "\n";
	}
}

void Deck::shuffle_deck()
{
	std::random_shuffle( deck.begin(), deck.end() );
}

Card Deck::remove_top()
{
	Card holder = deck[deck.size() - 1];
	deck.pop_back();
	return holder;
}

void Deck::add_top(Card card)
{
	deck.push_back(card);
}

void Deck::add_to_deck(int position, Card card)
{
	deck.insert(deck.begin() + position, card);
}

Card Deck::remove_target(int position)
{
	deck.erase( deck.begin() + position );
}

int Deck::get_size()
{
	return deck.size();
}

void Deck::operator+ (Deck const& second)
{
	for (unsigned int i = 0; i < second.deck.size(); i++)
		deck.push_back(second.deck[i]);
}

Deck Deck::divide_deck(int from)
{
	Deck divided;
	for (unsigned int i = 0; i < deck.size(); i++)
		divided.deck[i] = deck[from + i];
	deck.erase( deck.begin() + from, deck.end() );
}