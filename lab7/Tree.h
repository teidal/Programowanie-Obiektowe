#ifndef TREE_H
#define TREE_H
#include <iostream>
#include "Plant.h"

enum leaves {DECIDUOUS, CONIFEROUS};

class Tree : Plant{
	leaves leaves_type;
	bool give_fruits;
	static int count;

public:
	leaves get_leaves_type();
	void set_leaves_type(leaves);

	bool get_give_fruits();
	void set_give_fruits(bool);

	static int get_count();

	Tree();
	~Tree();
};

#endif