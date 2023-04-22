class Cone {
protected:
	double h, r;
	double x, y, z;


public:
	//Конструкторы
	Cone();

	Cone(double radius, double height);

	Cone(double radius,
		double height,
		double coord_x,
		double coord_y,
		double coord_z);

	//Методы
	void set(double radius, double height);

	void set(double radius,
		double height,
		double coord_x,
		double coord_y,
		double coord_z);

	void show();
	double get_x();
	double get_y();
	double get_z();
	double area();
	double volume();
	double height();
	double radius();


};