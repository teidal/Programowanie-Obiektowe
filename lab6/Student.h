#ifndef STUDENT_H
#define STUDENT_H
#include "Human.h"
#include "Abstract_student.h"

class Student : public Human, Abstract_student
{
protected:
	int registernmb;
	int semester;
	std::string field;
	std::string department;
	std::string *favorite_drinks;
	int favorite_drinks_size;
public:
	Student();
	Student(int, int);

	void set_register(int);
	int get_register();

	void set_semester(int);
	int get_semester();

	void set_field(std::string);
	std::string get_field();

	void set_department(std::string);
	std::string get_department();

	void set_favorite_drinks(std::string*);
	std::string* get_favorite_drinks();

	friend std::ostream& operator<<(std::ostream&, Student const&);
	friend std::istream& operator>>(std::istream&, Student&);
	
	bool operator==(Student &second);

	virtual ~Student();

};
#endif