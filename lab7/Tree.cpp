#include "Tree.h"

int Tree::count = 0;
int Tree::get_count()
{
	return count;
}

leaves Tree::get_leaves_type()
{
	return leaves_type;
}
void Tree::set_leaves_type(leaves leaves_type)
{
	this->leaves_type = leaves_type;
}

bool Tree::get_give_fruits()
{
	return give_fruits;
}
void Tree::set_give_fruits(bool give_fruits)
{
	this->give_fruits = give_fruits;
}

Tree::Tree()
{
	latin_name = "Quercus petraea";
	lifespan = 800;
	leaves_type = DECIDUOUS;
	give_fruits = false;
	count++;
}
Tree::~Tree()
{
	count--;
}