#ifndef HUMAN_H
#define HUMAN_H
#include <string.h>
class Human{
	int age;
	char sex;
	char name[10];
	char surname[25];
protected:
	void  *wsk=0;
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
	~Human();

};

#endif

/*Slowa kluczowe protected, public, private decyduja w jakis sposob zostana odziedziczone elementy public i protected
 klasy pierwotnej. Elementy z private, zawsze sa dziedziczone w ten sam sposob i sa ukryte przez klasa pochodna.
 
 Wywolanie zmiennej statycznej nawet w klasach pochodnych odzwierciedla liczbe wszystkich obiektow utworzonych z klasy 
 Human, nawet tych co dziedziczą po niej.
 
 Możliwa jest konwersja klasy pochodnej do bazowej, bo jest jakby nia. Zostana wtedy przypisane tylko te wartosci
 ktore posiada klasa bazowa. Konwersja w druga strone nie jest mozliwa chyba ze sam ja zdefiniujemy wewnatrz klasy
