// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


struct _location{
	float x,y;
};

class Circle{
	_location location;
	float radius;
public:
	void set_location(float x,float y){location.x=x; location.y=y;}
	void set_radius(float r){radius = r;}
	_location get_location(){return location;}
	float get_radius(){return radius;}

	float circumference()
{
	return 2 * M_PI * radius;
};
	float area()
{
	return M_PI * pow(radius,2);
};
};

int main()
{
	Circle circle;
circle.set_location(4., 2.);
circle.set_radius(15.);

printf("Circle location is %.1fx%.1f.\n", 
    circle.get_location().x, circle.get_location().y);
printf("Circle radius is %.1f.\n", 
    circle.get_radius());
printf("Circle circumference is %.2f.\n", 
    circle.circumference());
printf("Circle area is %.2f.\n", 
    circle.area());

system("pause");
}

/*  Zmienne zadeklarowane w strukturze mogą być wywoływane w funckji main(). Natomiast do 
zmiennych z klasy można odwołać się w funkcji main() tylko przy pomocy funkcji zadeklarowanych wewnątrz klasy.

Do zmiennnych w klasie odwołujemy się przy pomocy specjalnych publicznych funkcji by zmniejszyć ryzyko
"zniszczenia" zmiennych przez przypadek lub błąd użytkownika. Celowe niszczenie jest wciąż możliwe.
Funkcje public zmniejszają tylko ryzyko.*/



