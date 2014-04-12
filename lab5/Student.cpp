#include "stdafx.h"
#include "Student.h"


Student::Student():Human()
{

}

Student::Student(int books_size,int drinks_size):Human(books_size)
{
	set_register(12);
	set_semester(2);
	set_field("Informatyka");
	set_department("Elektroniki");
	favorite_drinks_size = drinks_size;
	favorite_drinks = new std::string [favorite_drinks_size];
}

void Student::set_register(int reg)
{
	registernmb = reg;
}
int Student::get_register()
{
	return registernmb;
}

void Student::set_semester(int sem)
{
	semester=sem;
}
int Student::get_semester()
{
	return semester;
}

void Student::set_field(std::string f)
{
	field = f;
}
std::string Student::get_field()
{
	return field;
}

void Student::set_department(std::string dep)
{
	department = dep;
}
std::string Student::get_department()
{
	return department;
}

void Student::set_favorite_drinks(std::string drinks[])
{
	for(int i = 0; i < n; i++)
	{
		favorite_books[i] = drinks[i];
	}
}

std::string* Student::get_favorite_drinks()
{
	return favorite_drinks;
}

std::ostream& operator<<(std::ostream& out, Student const&_student)
{
	out << "Name: " << _student.name << std::endl
		<< "Surname: " << _student.surname << std::endl
		<< "Sex: " << _student.sex << std::endl
		<< "Age: " << _student.age << std::endl
		<< "Favorite books: ";
			for(int i=0; i < _student.n; i++)
			{
				out << _student.favorite_books[i]<< std::endl;
			}
	out << "Register number: " << _student.registernmb << std::endl
		<< "Semester: " << _student.semester << std::endl
		<< "Field: " << _student.field << std::endl
		<< "Department: " << _student.department << std::endl
		<< "Favorite drinks: ";
			for(int i=0; i < _student.favorite_drinks_size; i++)
			{
				out << _student.favorite_drinks[i]<< std::endl;
			}
}
std::istream& operator>>(std::istream& in, Student&_student)
{
	std::cout << "Name: ";
		in >> _student.name;
		std::cout << std::endl;

	std::cout << "Surname: ";
		in >> _student.surname;
		std::cout << std::endl;

	std::cout << "Sex: ";
		in >> _student.sex;
		std::cout << std::endl;

	std::cout << "Age: ";
		in >> _student.age;
		std::cout << std::endl;

	std::cout << "Favorite books: ";
		for(int i=0; i < _student.n; i++)
			{
				in >> _student.favorite_books[i];
				std::cout << std::endl;
			}

	std::cout << "Register number: ";
		in >> _student.registernmb;
		std::cout << std::endl;

	std::cout << "Semester: ";
		in >> _student.semester;
		std::cout << std::endl;

	std::cout << "Field: ";
		in >> _student.field;
		std::cout << std::endl;

	std::cout << "Department: ";
		in >> _student.department;
		std::cout << std::endl;

	std::cout << "Favorite drinks: ";
		for(int i=0; i < _student.favorite_drinks_size; i++)
			{
				in >> _student.favorite_drinks[i];
				std::cout << std::endl;
			}
}


Student::~Student()
{
	delete[] favorite_drinks;
};