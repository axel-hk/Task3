#pragma once
#include <string>
#include <iostream>
#pragma once


class Sea
{
protected:
	std::string name;
	std::string location;
	double area;
	double size;

public:
	Sea();
	Sea(std::string in_name, std::string in_location, double in_area, double in_size);
	std::string get_name();
	std::string get_location();
	double get_area();
	double get_size();
	void set_params(std::string in_name, std::string in_location, double in_area, double in_size);
	friend std::ostream& operator << (std::ostream& os, Sea& Sea);
	friend std::istream& operator >> (std::istream& in, Sea& Sea);
};

std::ostream& operator << (std::ostream& os, Sea& Sea);
std::istream& operator >> (std::istream& in, Sea& Sea);
