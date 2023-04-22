#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include "Cone.h"


Cone::Cone()
{
	x = y = z = 0;
	h = r = 1;
}


Cone::Cone(double radius, double height)
{
	set(radius, height);
}



Cone::Cone(double radius, double height, double coord_x,
	double coord_y, double coord_z)
{
	set(radius, height, coord_x, coord_y, coord_z);
}


//Методы

void Cone::set(double radius, double height)
{
	x = y = z = 0;
	r = radius;
	h = height;
}




void Cone::set(double radius, double height, double coord_x,
	double coord_y, double coord_z)
{
	x = coord_x;
	y = coord_y;
	z = coord_z;

	h = height;
	r = radius;
}

double Cone::get_x()
{
	return x;
}

double Cone::get_y()
{
	return y;
}

double Cone::get_z()
{
	return z;
}

double Cone::area()
{
	return M_PI * r * (r + sqrt(pow(r, 2) + pow(h, 2)));
}

double Cone::volume()
{
	return (M_PI * pow(r, 2) * h) / 3;
}

double Cone::height()
{
	return h;
}

double Cone::radius()
{
	return r;
}


void Cone::show()
{
	std::cout << "Конус с " << std::endl;
	std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << "r: " << r << std::endl;
}