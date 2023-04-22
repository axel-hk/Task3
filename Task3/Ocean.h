#include <vector>
#include <string>
#include "Sea.h"


class Ocean : public Sea
{
private:
	std::vector<Sea> child_water_areas;

public:
	Ocean();
	Ocean(Sea child_object);
	Ocean(std::string in_name, std::string in_location, double in_area, double in_size, Sea child_object);
	Ocean(std::string in_name, std::string in_location, double in_area, double in_size);
	Ocean(std::vector<Sea> child_objects);
	Ocean(std::string in_name, std::string in_location, double in_area, double in_size, std::vector<Sea> child_objects);
	std::vector<Sea> get_childs();
	void add_child(Sea child);
	void add_childs(std::vector<Sea> childs);
};