#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
class Human
{
protected:
	int age;
	char sex;
	std::string name;
	std::string surname;
	std::string  *favorite_books;
	int n;
public:
	Human();
	Human(int );

	static int count;
	int get_count();

	void set_age(int);
	int get_age();
	
	void set_sex(char);
	char get_sex();

	void set_name(std::string);
	std::string get_name();

	void set_surname(std::string);
	std::string get_surname();

	void set_favorite_books(std::string*);
	std::string* get_favorite_books();

	friend std::ostream& operator<<(std::ostream&, Human const&);
	friend std::istream& operator>>(std::istream&, Human&);

	virtual ~Human();

};

#endif

/*Destruktor musi byc wirtualny, aby zapewnic ze wykonane zostana destruktory klas pochodnyhc
co zapewni usuniecie wszystkich dynamicznych tablic*/
