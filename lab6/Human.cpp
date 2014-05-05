#include "stdafx.h"
#include "Human.h"

int Human::count=0;
int Human::get_count()
{
	return count;
}

Human::Human()
{
	count++;
	n = 1;
	set_age(30);
	set_sex('M');
	set_name("Jan");
	set_surname("Kowalski");
	favorite_books = new std::string [n];
	favorite_books[0] = "Dziady";
}

Human::Human(int size)
{
	count++;
	n = size;
	set_age(30);
	set_sex('M');
	set_name("Jan");
	set_surname("Kowalski");
	favorite_books = new std::string [n];

}

void Human::set_age(int a)
{
	age=a;
}
int Human::get_age()
{
	return age;
}

void Human::set_sex(char s)
{
	sex=s;
}
char Human::get_sex()
{
	return sex;
}

void Human::set_name(std::string n)
{
	name=n;
}
std::string Human::get_name()
{
	return name;
}

void Human::set_surname(std::string sn)
{
	surname = sn;
}
std::string Human::get_surname()
{
	return surname;
}

void Human::set_favorite_books(std::string books[])
{
	for(int i = 0; i < n; i++)
	{
		favorite_books[i] = books[i];
	}
}

std::string* Human::get_favorite_books()
{
	return favorite_books;
}

std::ostream& operator<<(std::ostream &out, Human const&_human)
{
	out << "Name: " << _human.name << std::endl
		<< "Surname: " << _human.surname << std::endl
		<< "Sex: " << _human.sex << std::endl
		<< "Age: " << _human.age << std::endl
		<< "Favorite books: ";
			for(int i=0; i < _human.n; i++)
			{
				out << _human.favorite_books[i]<< std::endl;
			}
}
std::istream& operator>>(std::istream& in, Human& _human)
{
	std::cout << "Name: ";
		in >> _human.name;
		std::cout << std::endl;

	std::cout << "Surname: ";
		in >> _human.surname;
		std::cout << std::endl;

	std::cout << "Sex: ";
		in >> _human.sex;
		std::cout << std::endl;

	std::cout << "Age: ";
		in >> _human.age;
		std::cout << std::endl;

	std::cout << "Favorite books: ";
		for(int i=0; i < _human.n; i++)
			{
				in >> _human.favorite_books[i];
				std::cout << std::endl;
			}
}

void Human::birthday()
{
	;
}

Human::~Human()
{
	delete[] favorite_books;
}
