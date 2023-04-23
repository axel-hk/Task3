#ifndef SET_H
#define SET_H

template <typename Atype>
class Set {
    Atype* a; // массив элементов
    int len;
    int current = 0;// количество элементов в множестве

public:
    Set(int size) {
        len = size;
        a = new Atype[size];
        for (int i = 0; i < size; i++) a[i] = 0;
    }// конструктор
    ~Set() {
        delete[] a;
    }; // деструктор

    bool Is_Empty() const { // проверка на пустоту
        return len == 0;
    }

    bool Is_Full() const { // проверка на заполненность
        return len == current;
    }

    bool Add(Atype T) { // включение элемента
        if (In_Set(T)) return false;
        if (Is_Full()) return false;
        if (current < len) {
            a[current++] = T;
        }
        return true;
    }

    bool In_Set(Atype T) const { // проверка на принадлежность элемента
        for (int i = 0; i < len; i++)
            if (a[i] == T) return true;
        return false;
    }

    Atype Get(Atype T) const { // извлечение элемента по индексу
        if (T.index < 0 || T.index >= len) throw "Invalid index";
        return a[T.index];
    }

    int Get_Size() const { // получение размера множества
        return len;
    }

    void Print() const { // вывод множества в консоль
        for (int i = 0; i < len; i++) {
                cout << a[i] << " ";
        }
        cout << endl;
    }

    // прямой итератор для просмотра элементов множества
    class Iterator {
        Atype* ptr;
    public:
        Iterator(Atype* p) : ptr(p) {}
        Iterator& operator++() { ptr++; return *this; }
        Atype& operator*() { return *ptr; }
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
    };

    Iterator begin() const { return Iterator(a); }
    Iterator end() const { return Iterator(a + len); }
};

#endif

