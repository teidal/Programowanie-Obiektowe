#include "stdafx.h"
#include "Circle.h"

int Circle::count = 0;

Circle::Circle()
{
	count++;
	_location loc1={0., 0.};
	set_location(loc1);
	set_radius(0);
}
Circle::Circle(_location localization, float r)
{
	count++;
	location.x=localization.x;
	location.y=localization.y;
	radius=r;
}

void Circle::set_location(_location localization)
{
	location.x=localization.x; location.y=localization.y;
}
void Circle::set_radius(float r)
{
	radius = r;
}
_location Circle::get_location()
{
	return location;
}
float Circle::get_radius()
{
	return radius;
}
int Circle::get_count()
{
	return count;
}

float Circle::circumference()
{
	return 2 * M_PI * radius;
}
float Circle::area()
{
	return M_PI * pow(radius,2);
}

Circle Circle::operator+(Circle circle)
{
	_location sum={(location.x+circle.location.x)/2.,(location.y+circle.location.y)/2.};
	Circle circle2(sum,radius);
	return (circle2);
}
Circle Circle::operator*(float r)
{
	Circle ratio(location,radius*r);
	return ratio;
}

Circle::~Circle()
{
	count--;
}