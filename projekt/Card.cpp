#include "stdafx.h"
#include "Card.h"

Card::Card()
{

}
Card::Card(std::string name, int power, int health) : name(name), power(power), health(health)
{

}
Card::~Card()
{

}

void Card::set_name(std::string name)
{
	this->name = name;
}
std::string Card::get_name()
{
	return name;
}

void Card::set_power(int power)
{
	this->power = power;
}
int Card::get_power()
{
	return power;
}

void Card::set_health(int health)
{
	this->health = health;
}
int Card::get_health()
{
	return health;
}

void Card::display_card()
{
	std::cout << get_name() << "  " << get_power() << "/" << get_health() << "\n";
}