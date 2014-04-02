#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES
#include <math.h>

struct _location
{
	float x,y;
};

class Circle
{
	_location location;
	float radius;
	static int count;
	
public:
	Circle();
	Circle(_location, float);

	void set_location(_location);
	void set_radius(float r);
	_location get_location();
	float get_radius();
	int get_count();

	float circumference();
	float area();

	Circle operator+ (Circle);
	Circle operator* (float);

	~Circle();
};


#endif