#include "stdafx.h"
#include "Human.h"

int Human::ile=0;
int Human::get_ile(){
	return ile;
}

void Human::set_age(int a){
	age=a;
}
int Human::get_age(){
	return age;
}

void Human::set_sex(char s){
	sex=s;
}
char Human::get_sex(){
	return sex;
}

void Human::set_name(char *n){
strcpy(name, n);
}
char* Human::get_name(){
	return name;
}

void Human::set_surname(char *sn){
	strcpy(surname, sn);
}
char* Human::get_surname(){
	return surname;
}

Human::Human(int r){
	ile++;
	set_age(30);
	set_sex('M');
	set_name("Jan");
	set_surname("Kowalski");
	wsk = new int[r];
}
/*Human::Human(int r, int a=30, char s='M', char *n="Jan", char *sn="Kowalski"){
	ile++;
	set_age(a);
	set_sex(s);
	set_name(n);
	set_surname(sn);
	wsk = new int[r];
}*/
Human::~Human(){
	delete(wsk);
}
