#include "stdafx.h"
#include "Deck.h"
#include <algorithm>

Deck::Deck()
{
	for (int i = 0; i<20; i++)
	{
	if (i < 4) deck.push_back(Card("Farmer", 1, 1));
	if (i > 3 && i < 8) deck.push_back(Card("Soldier", 2, 2));
	if (i > 7 && i < 12) deck.push_back(Card("Warrior", 3, 2));
	if (i > 11 && i < 16) deck.push_back(Card("Protector", 2, 3));
	if (i > 15 && i < 19) deck.push_back(Card("General", 3, 3));
	if (i == 19) deck.push_back(Card("King", 4, 4));
	}
	shuffle_deck();
}

Deck::~Deck()
{

}

void Deck::display_deck()
{
	std::cout << "Twoja talia: \n";
	for (unsigned int i = 0; i < deck.size(); i++)
	{
		deck[i].display_card();
		std::cout << "\n";
	}
}

void Deck::shuffle_deck()
{
	std::random_shuffle( deck.begin(), deck.end());
}

Card Deck::remove_top_deck()
{
	Card holder = deck[deck.size() - 1];
	deck.pop_back();
	return holder;
}

void Deck::add_top_deck(Card card)
{
	deck.push_back(card);
}

void Deck::add_to_deck(int position, Card card)
{
	deck.insert(deck.begin() + position, card);
}

Card Deck::remove_target_deck(int position)
{
	Card holder;
	holder = deck[position - 1];
	deck.erase( deck.begin() + position );
	return holder;
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
	return divided;
}

void Deck::shift_deck(unsigned int to_where)
{
	Deck temp;
	for (unsigned int i = 0; i < to_where; i++)
		{
			temp.deck[i] = deck[i];
		}
	deck.erase(deck.begin(), deck.begin() + to_where);
	for (unsigned int i = 0; i < to_where; i++)
		{
			deck.push_back(temp.deck[i]);
		}
}