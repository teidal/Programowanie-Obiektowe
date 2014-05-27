#ifndef PLANT_H
#define PLANT_H
#include <iostream>

class Plant
{
	static int count;

protected:
	std::string latin_name;
	int lifespan;
public:
	std::string get_latin_name();
	void set_latin_name(std::string);

	int get_lifespan();
	void set_lifespan(int);

	static int get_count();

	Plant();
	Plant(const Plant&);
	~Plant();
};

#endif