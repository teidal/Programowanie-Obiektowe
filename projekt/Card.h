#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
#include "Name.h"

class Card : public Name
{
protected:

	int power, health;

public:
	Card();
	Card(std::string, int, int);
	~Card();

	void set_power(int);
	int get_power();

	void set_health(int);
	int get_health();

	void display_card();
};

#endif