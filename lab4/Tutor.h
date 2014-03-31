#ifndef TUTOR_H
#define TUTOR_H
#include "Human.h"

class Tutor : public Human{
	char title[15];
	int publicnmb;
public:
	void set_title(char *);
	char* get_title();

	void set_publicnmb(int);
	int get_publicnmb();

	Tutor(int);
	//Tutor(int, char*, int);
	~Tutor();
};

#endif