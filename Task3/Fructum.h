#include "Cone.h"
#include <iostream>

class Fructum : public Cone
{
private:
	double h2; // Высота усеченного конуса
	double r2; // Высота верхнего основания

public:
	//Конструкторы
	Fructum();
	Fructum(double radius, double height, double radius2, double height2);
	Fructum(double radius,
		double height,
		double radius2,
		double height2,
		double coord_x,
		double coord_y,
		double coord_z);

	Fructum(Cone cone);
	Fructum(Cone cone, double radius2, double height2);

	//Методы

	void set(double radius, double height, double radius2, double height2);

	void set(double radius,
		double height,
		double radius2,
		double height2,
		double coord_x,
		double coord_y,
		double coord_z);

	void show();
	double get_area();
	double get_volume();
	friend std::ostream& operator << (std::ostream& os, Fructum& cone);
	friend std::istream& operator >> (std::istream& in, Fructum& cone);

};


std::ostream& operator << (std::ostream& os, Fructum& cone);
std::istream& operator >> (std::istream& in, Fructum& cone);
bool operator > (Fructum& cone1, Fructum& cone2);
bool operator < (Fructum& cone1, Fructum& cone2);
bool operator == (Fructum& cone1, Fructum& cone2);
bool operator <= (Fructum& cone1, Fructum& cone2);
bool operator >= (Fructum& cone1, Fructum& cone2);


