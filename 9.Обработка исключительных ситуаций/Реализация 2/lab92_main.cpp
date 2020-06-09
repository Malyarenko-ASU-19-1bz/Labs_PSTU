#include "Vector.h" 
#include "Error.h" 
#include <iostream> 
using namespace std;


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
        if (n > MAX_SIZE || n < 0) throw error("Превышен максимальный размер!\n");
        if (n == 0) throw error("Вектор пустой!\n");

        Vector x(n);
        cout << "Вектор x создан: ";
        x.Show();        
        cout << "Размер вектора x: " << x() << endl;
        
        cout << "Введите количество удаляемых элементов: ";
        cin >> del;
        len = x();
        x - del;        
        cout << "Из конца вектора x удалены элементы в количестве " << len - x() << " шт.: " << endl;
        x.Show();
        cout << "Размер вектора x: " << x() << endl;

        cout << "Введите количество добавляемых элементов: ";
        cin >> add;
        len = x();
        x + add;
        cout << "В конец вектора x добавлены элементы в количестве " << x() - len << " шт.: " << endl;
        x.Show();
        cout << "Размер вектора x: " << x() << endl;

        cout << "Введите номер элемента:";
        cin >> index;
        if (index < 0) throw error("Индекс меньше нуля!\n");
        if (index > x()) throw error("Идндекс больше текущего размера!\n");
        cout << "Элемент вектора №" << index << ":  " << x[index] << endl;
    }
    catch (error e)
    {
        e.what();
    }
    system("pause");
    return 0;
}
