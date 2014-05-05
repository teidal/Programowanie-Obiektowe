#ifndef ABSTRACT_STUDENT_H
#define ABSTRACT_STUDENT_H

class Student;

class Abstract_student
{
public:
	Abstract_student();
	virtual ~Abstract_student();

	virtual bool operator==(Student &second) = 0;
};


#endif