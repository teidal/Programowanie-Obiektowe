#ifndef NAME_H
#define NAME_H
#include <iostream>

class Name
{
protected:
	std::string name;
public:
	void set_name(std::string);
	std::string get_name();

	Name();
	Name(std::string);
};

#endif