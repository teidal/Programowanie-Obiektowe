#include "stdafx.h"
#include "Name.h"

Name::Name()
{
	
}

Name::Name(std::string name): name(name)
{
	
}

void Name::set_name(std::string name)
{
	this->name = name;
}

std::string Name::get_name()
{
	return name;
}
