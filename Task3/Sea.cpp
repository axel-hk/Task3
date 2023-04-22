#include "Ocean.h"
#include <string>
#include <iostream>

Sea::Sea()
{
	name = "None";
	location = "None";
	area = 0;
	size = 0;
}


Sea::Sea(std::string in_name, std::string in_location, double in_area, double in_size)
{
	set_params(in_name, in_location, in_area, in_size);
}


void Sea::set_params(std::string in_name, std::string in_location, double in_area, double in_size)
{
	name = in_name;
	location = in_location;
	area = in_area;
	size = in_size;
}

std::string Sea::get_name()
{
	return name;
}

std::string Sea::get_location()
{
	return location;
}

double Sea::get_area()
{
	return area;
}

double Sea::get_size()
{
	return size;
}


std::ostream& operator << (std::ostream& os, Sea& Sea)
{
	return os << "Name: " << Sea.name << "\nLocation: " << Sea.location << "\nArea: " << Sea.area << "\nSize: " << Sea.size << std::endl;
}

std::istream& operator >> (std::istream& in, Sea& Sea)
{
	std::cout << "Введите имя" << std::endl;
	in >> Sea.name;
	std::cout << "Введите локацию" << std::endl;
	in >> Sea.location;
	std::cout << "Введите глубину" << std::endl;
	in >> Sea.size;
	std::cout << "Введите площадь" << std::endl;
	in >> Sea.area;
	return in;
}






