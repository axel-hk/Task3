#define _USE_MATH_DEFINES
#include <math.h>
#include "Fructum.h"
#include <cmath>
#include <iostream>


#include <cmath>
#include <iostream>


Fructum::Fructum()
{
	h2 = 1;
	r2 = 1;
}

Fructum::Fructum(double radius, double height,
	double radius2, double height2)
{
	set(radius, height, radius2, height2);
}

Fructum::Fructum(double radius,
	double height,
	double radius2,
	double height2,
	double coord_x,
	double coord_y,
	double coord_z)
{
	set(radius, height, radius2, height2, coord_x, coord_y, coord_z);
}

Fructum::Fructum(Cone cone)
{
	double radius2 = 1;
	double height2 = 1;
	set(cone.radius(), cone.height(),
		radius2, height2, cone.get_x(),
		cone.get_y(), cone.get_z()
	);
}


Fructum::Fructum(Cone cone, double radius2, double height2)
{
	set(cone.radius(), cone.height(),
		radius2, height2, cone.get_x(),
		cone.get_y(), cone.get_z()
	);
}


void Fructum::set(double radius, double height, double radius2, double height2)
{
	Cone::set(radius, height);
	h2 = height2;
	r2 = radius2;
}

void Fructum::set(double radius,
	double height,
	double radius2,
	double height2,
	double coord_x,
	double coord_y,
	double coord_z)
{
	Cone::set(radius, height, coord_x, coord_y, coord_z);
	h2 = height2;
	r2 = radius2;
}


void Fructum::show()
{
	std::cout << "Усеченный конус с коориднатами x: " << x << " y: " << y << " z: " << z << std::endl;
	std::cout << "Высота всего конуса h: " << h << std::endl;
	std::cout << "Высота усеченного конуса h: " << h2 << std::endl;
	std::cout << "Радиус нижнего основания r: " << r << std::endl;
	std::cout << "Радиус верхнего основания r2: " << r2 << std::endl;
}

double Fructum::get_area()
{
	double full_area = Cone::area();
	double l = h - h2;
	return full_area - (M_PI * r2 * (r2 + sqrt(pow(r2, 2) + pow(l, 2))));
}

double Fructum::get_volume()
{
	double full_volume = Cone::volume();
	double l = h - h2;
	return full_volume - ((M_PI * pow(r2, 2) * l) / 3);

}

std::ostream& operator << (std::ostream& os, Fructum& cone)
{
	return os << "Усеченный конус\nx:" << cone.get_x() << "\ny: " << cone.get_y() << "\nz: " << cone.get_z() << 
		"\nr1: " << cone.radius() << "\nr2: " << cone.r2 << "\nh: " << cone.h2 << "\narea: " << cone.area() << "\nvolume: " << cone.volume() << std::endl;
}

std::istream& operator >> (std::istream& in, Fructum& cone)
{
	double r, h, r2, h2, x, y, z;

	in >> r >> h >> r2 >> h2 >> x >> y >> z;
	cone.set(r, h, r2, h2, x, y, z);
	return in;
}

bool operator > (Fructum& cone1, Fructum& cone2)
{
	return cone1.volume() > cone2.volume();
}

bool operator < (Fructum& cone1, Fructum& cone2)
{
	return cone1.volume() < cone2.volume();
}

bool operator == (Fructum& cone1, Fructum& cone2)
{
	return cone1.volume() == cone2.volume();
}

bool operator <= (Fructum& cone1, Fructum& cone2)
{
	return cone1.volume() <= cone2.volume();
}

bool operator >= (Fructum& cone1, Fructum& cone2)
{
	return cone1.volume() >= cone2.volume();
}



