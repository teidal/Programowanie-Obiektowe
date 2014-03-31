#include "stdafx.h"
#include "Tutor.h"


void Tutor::set_title(char *titl){
	strcpy(title, titl);
}
char *Tutor::get_title(){
	return title;
}

void Tutor::set_publicnmb(int nmb){
	publicnmb=nmb;
}
int Tutor::get_publicnmb(){
	return publicnmb;
}

Tutor::Tutor(int r):Human(r){
	set_title("Magister");
	set_publicnmb(2);
}
/*Tutor::Tutor(int r, char *titl, int number):Human(r){
	set_title(titl);
	set_publicnmb(number);
}*/
Tutor::~Tutor(){
//if(wsk != 0) delete (wsk);

}