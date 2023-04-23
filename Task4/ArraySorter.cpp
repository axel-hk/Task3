#include <iostream>
#include <cstring>

template<typename T>
class ArraySorter
{
public:
    static void insertionSort(T* arr, int size)
    {
        for (int i = 1; i < size; i++)
        {
            T key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }
};

template<>
class ArraySorter<char*>
{
public:
    static void insertionSort(const char** arr, int size)
    {   
      
        for (int i = 1; i < size; i++)
        {
            char* key = const_cast<char**>(arr)[i];
            int j = i - 1;

            while (j >= 0 && strcmp(arr[j], key) > 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }
};
