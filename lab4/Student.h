#ifndef STUDENT_H
#define STUDENT_H
#include "Human.h"

class Student : public Human{
	int registernmb;
	int semester;
	char field[20];
	char department[20];
public:
	void set_register(int);
	int get_register();

	void set_semester(int);
	int get_semester();

	void set_field(char*);
	char *get_field();

	void set_department(char*);
	char* get_department();

	Student(int);
	//Student(int, int, int, char*, char*);
	~Student();

};
#endif