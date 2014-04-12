#include "stdafx.h"
#include "Student2.h"

Student2::Student2():Student()
{
	degree = "inz.";
	average_size = 2;
	average = new double[average_size];
	average[0] = 3.5;
	average[1] = 5.5;
}

void Student2::set_degree(std:: string new_degree)
{
	degree = new_degree;
}
std::string Student2::get_degree()
{
	return degree;
}

void Student2::set_average(double* new_average)
{
	for(int i = 0; i < average_size; i++)
	{
		average[i] = new_average[i];
	}
}

double* Student2::get_average()
{
	return average;
}

std::ostream& operator<<(std::ostream& out, Student2 const&_student2)
{
	out << "Name: " << _student2.name << std::endl
		<< "Surname: " << _student2.surname << std::endl
		<< "Sex: " << _student2.sex << std::endl
		<< "Age: " << _student2.age << std::endl
		<< "Favorite books: ";
			for(int i=0; i < _student2.n; i++)
			{
				out << _student2.favorite_books[i]<< std::endl;
			}
	out << "Register number: " << _student2.registernmb << std::endl
		<< "Semester: " << _student2.semester << std::endl
		<< "Field: " << _student2.field << std::endl
		<< "Department: " << _student2.department << std::endl
		<< "Favorite drinks: ";
			for(int i=0; i < _student2.favorite_drinks_size; i++)
			{
				out << _student2.favorite_drinks[i]<< std::endl;
			}
	out << "Degree: " << _student2.degree << std::endl
		<< "Averages: ";
			for(int i=0; i < _student2.average_size; i++)
			{
				out << _student2.average[i]<< std::endl;
			}
}

std::istream& operator>>(std::istream& in, Student2&_student2)
{
	std::cout << "Name: ";
		in >> _student2.name;
		std::cout << std::endl;

	std::cout << "Surname: ";
		in >> _student2.surname;
		std::cout << std::endl;

	std::cout << "Sex: ";
		in >> _student2.sex;
		std::cout << std::endl;

	std::cout << "Age: ";
		in >> _student2.age;
		std::cout << std::endl;

	std::cout << "Favorite books: ";
		for(int i=0; i < _student2.n; i++)
			{
				in >> _student2.favorite_books[i];
				std::cout << std::endl;
			}

	std::cout << "Register number: ";
		in >> _student2.registernmb;
		std::cout << std::endl;

	std::cout << "Semester: ";
		in >> _student2.semester;
		std::cout << std::endl;

	std::cout << "Field: ";
		in >> _student2.field;
		std::cout << std::endl;

	std::cout << "Department: ";
		in >> _student2.department;
		std::cout << std::endl;

	std::cout << "Favorite drinks: ";
		for(int i=0; i < _student2.favorite_drinks_size; i++)
			{
				in >> _student2.favorite_drinks[i];
				std::cout << std::endl;
			}

	std::cout << "Degree: ";
		in >> _student2.degree;
		std::cout << std::endl;

	std::cout << "Average: ";
		for(int i=0; i < _student2.average_size; i++)
			{
				in >> _student2.average[i];
				std::cout << std::endl;
			}
}

Student2::~Student2()
{
	delete[] average;
}