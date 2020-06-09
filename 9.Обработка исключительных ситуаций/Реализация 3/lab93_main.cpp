#include "Vector.h" 
#include <string.h>
#include <iostream> 

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа  №9\n";
    cout << "**Обработка исключительных ситуаций**\n";
    try
    {
        int n = 0, add = 0, del = 0, index, len;
        
            cout << "Введите размер вектора (не более 20):";
            cin >> n;
            if (n > MAX_SIZE || n < 0) throw MaxSizeError();
            if (n == 0) throw EmptySizeError();
                    
            Vector x(n);
            cout << "Вектор x создан: ";
            cout << x;
            cout << "Размер вектора x: "<< x()<< endl;

            len = x();
            x.Del();
            cout << "Из конца вектора x удалены элементы в количестве "<<len - x()<< " шт.: "<< endl;
            cout << x;
            cout << "Размер вектора x: " << x() << endl;

            len = x();
            x.Add();
            cout << "В конец вектора x добавлены элементы в количестве " << x() - len << " шт.: " << endl;
            cout << x;
            cout << "Размер вектора x: " << x() << endl;

            cout << "Введите номер элемента:";
            cin >> index;
            if (index < 0) throw IndexError1();
            if (index > x()) throw IndexError2();
            cout << "Элемент вектора №" << index << ":  "<< x[index] <<  endl;
    }    
    catch (Error& e)
    {
        e.what();
    }
    system("pause");
    return 0;
}