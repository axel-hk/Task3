#define SEA_INCLUDED

#include <vector>
#include <string>


#ifdef SEA_INCLUDED
#include "Sea.h"
#endif

class Bay : public Sea
{
private:
	std::vector<Sea> parent_water_areas;

public:
	Bay();
	Bay(std::string in_name, std::string in_location, double in_area, double in_size);
	Bay(std::string in_name, std::string in_location, double in_area, double in_size, Sea parent_object);
	Bay(std::string in_name, std::string in_location, double in_area, double in_size, std::vector<Sea> parent_objects);
	std::vector<Sea> get_parents();
	void add_parent(Sea parent_object);
	void add_parents(std::vector<Sea> parent_objects);
};

