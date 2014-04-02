// lab2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Circle.h"

int main()
{
	_location loc1={12., 6.};
	_location loc2={26.,0.5};
	Circle a;
	Circle b(loc1, 6.);
	Circle c(loc2, 2.3);

	float x=3.,y=2.6;

	a=a+b;
	c=c*x;

	printf("Circle 'a' location is %.1fx%.1f.\n", 
    a.get_location().x, a.get_location().y);
	printf("Circle 'a' radius is %.1f.\n", 
    a.get_radius());

	printf("Circle 'c' location is %.1fx%.1f.\n", 
    c.get_location().x, c.get_location().y);
	printf("Circle 'c' radius is %.1f.\n", 
    c.get_radius());

	printf("The number of created circles is %d \n",
		c.get_ile());
	
	getchar();
}





