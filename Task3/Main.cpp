#include <iostream>
#include "Cone.h"
#include "Fructum.h"
#include "Bay.h"
#include "Sea.h"
#include "Ocean.h"
using namespace std;
int main()
{
    //1


    Cone c1(3, 7);              // Конус с центром в начале координат с радиусом 3 и выотой 7
    Cone c2(1, 2, 3, 5, 10);    // Произвольный конус

    cout << "Конус 1: " << endl;
    c1.show();
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";

    cout << "Конус 2: " << endl;
    c2.show();
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";

    //2

		Fructum fructum1;
		Fructum fructum2;

		cout << "Введите параметры  r, h, r2, h2, x, y, z через запятую\n: ";
		cin >> fructum1;
		cout << fructum1;

		cout << "\n" << endl;
		cout << "Введите параметры  r, h, r2, h2, x, y, z через запятую\n: ";
		cin >> fructum2;
		cout << fructum2;

		cout << "\n" << endl;
		cout << "Первый конус больше второго?: " << (fructum1 > fructum2 ? "Да" : "Нет") << endl;
		cout << "Первый конус меньше второго?: " << (fructum1 < fructum2 ? "Да" : "No") << endl;
		cout << "Конусы равны?: " << (fructum1 == fructum2 ? "Да" : "No") << endl;
		cout << "Первый конус меньше или равен второму?: " << (fructum1 <= fructum2 ? "Да" : "No") << endl;
		cout << "Первый конус больше или равен второму?: " << (fructum1 >= fructum2 ? "Да" : "No") << endl;

		Cone baseCone(5,5) ; 

		Fructum childFructum1(baseCone); 
		cout << childFructum1;

		Fructum childFructum2(baseCone, 1, 2);
		cout << childFructum2;

	//3

		Ocean ocean;
		cin >> ocean;
		cout << ocean;

		Bay bay;
		cin >> bay;
		cout << bay;
		bay.add_parent(ocean);

		Sea sea;
		cin >> sea;
		cout << sea;
		
		bay.add_parent(ocean);
		ocean.add_child(sea);

    return 0;
}