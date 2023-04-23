#include "My_class.cpp"
#include "ArraySorter.cpp"
#include "Set.h"
int main() {
    //1
    int x = 1;
    int y = 2;
    cout << "Перед обменом (целые)\n";
    OutXY(x, y);
    Swap(x, y);
    cout << "После обмена\n";
    OutXY(x, y);
    float x1 = 1.5;
    float y1 = 5.9;
    cout << "Перед обменом (float)\n";
    OutXY(x1, y1);
    Swap(x1, y1);
    cout << "После обмена\n";
    OutXY(x1, y1);
    My_class t1(1, 1.5), t2(2, 9.9);
    cout << "Перед обменом (классы)\n";
    t1.Out();
    t2.Out();
    Swap(t1, t2);
    cout << "После обмена\n";
    t1.Out();
    t2.Out();

    //2

    int intArr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int intArrSize = sizeof(intArr) / sizeof(int);

    ArraySorter<int>::insertionSort(intArr, intArrSize);

    for (int i = 0; i < intArrSize; i++)
    {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    const char* strArr[5] = { "Ivan", "Alex", "Maria", "Vitaly", "Boris" };
    int strArrSize = sizeof(strArr) / sizeof(char*);

    ArraySorter<char*>::insertionSort(strArr, strArrSize);

    for (int i = 0; i < strArrSize; i++)
    {
        std::cout << strArr[i] << std::endl;
    }

    //3
    Set<int> s(5);
    s.Add(5);
    s.Add(3);
    s.Add(3);
    s.Add(4);
    s.Add(5);
    s.Print();
    cout << "Size: " << s.Get_Size() << endl;
    cout << "Is Empty: " << s.Is_Empty() << endl;
    cout << "Is Full: " << s.Is_Full() << endl;
    s.Add(6);
    cout << "Is Full: " << s.Is_Full() << endl;
    cout << "In Set(3): " << s.In_Set(3) << endl;
    std::cout << "Set size: " << s.Get_Size() << std::endl;
    std::cout << "Set is empty: " << (s.Is_Empty() ? "true" : "false") << std::endl;
    std::cout << "Set is full: " << (s.Is_Full() ? "true" : "false") << std::endl;

   
    std::cout << "Set contents: ";
    for (Set<int>::Iterator i = s.begin(); i != s.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    return 0;
}