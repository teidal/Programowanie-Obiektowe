#ifndef STUDENT2_H
#define STUDENT2_H
#include "Student.h"

class Student2 : public Student
{
	std::string degree;
	double *average;
	int average_size;
public:
	Student2();

	void set_degree(std::string);
	std::string get_degree();

	void set_average(double*);
	double* get_average();

	friend std::ostream& operator<<(std::ostream&, Student2 const&);
	friend std::istream& operator>>(std::istream&, Student2&);

	virtual ~Student2();
};

#endif