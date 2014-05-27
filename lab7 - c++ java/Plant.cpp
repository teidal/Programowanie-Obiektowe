#include "Plant.h"

int Plant::count = 0;

std::string Plant::get_latin_name()
{
	return latin_name;
}
void Plant::set_latin_name(std::string latin_name)
{
	this->latin_name = latin_name;
}

int Plant::get_lifespan()
{
	return lifespan;
}
void Plant::set_lifespan(int lifespan)
{
	this->lifespan = lifespan;
}

Plant::Plant()
{
	latin_name = "Rosa villosa";
	lifespan = 5;
	count++;
}

Plant::Plant(const Plant& plant)
{
	latin_name = plant.latin_name;
	lifespan = plant.lifespan;
	count++;
}
Plant::~Plant()
{
	count--;
}