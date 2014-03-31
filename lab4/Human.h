#ifndef HUMAN_H
#define HUMAN_H
#include <string.h>
class Human{
	int age;
	char sex;
	char name[10];
	char surname[25];
protected:
	void  *wsk;
public:
	static int ile;
	int get_ile();

	void set_age(int);
	int get_age();

	void set_sex(char);
	char get_sex();

	void set_name(char*);
	char* get_name();

	void set_surname(char*);
	char* get_surname();

	Human(int );
	//Human(int, int, char, char*, char*);
	~Human();

};

#endif