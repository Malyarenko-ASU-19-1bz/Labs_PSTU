#include <iostream>
#include "fraction.h"
using namespace std;

fraction make_fraction(int F, int S)
{
    fraction t;//создали временную переменную  
    t.Init(F, S);//инициализировали поля переменной t с помощью параметров функции 
    return t;//вернули значение переменной t 
}

void main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    //определение переменных А и В 
    fraction A;
    fraction B;
    A.Init(3, 2);//инициализация переменной А
    cout << "Ввод полей переменной В" << endl;
    B.Read();//ввод полей переменных В
    cout << "Значения полей переменной А" << endl;
    A.Show();//вывод значений полей переменной А
    cout << "Значения полей переменной В" << endl;
    B.Show();//вывод значений полей переменной В 
  //вывод денежной суммы, вычисленного с помощью функции Summa() 
    cout << "вывод денежной суммы" << endl;
    cout << "A.Summa(" << A.first << "," << A.second << ")=" << A.Summa() << endl;
    cout << "B.Summa(" << B.first << "," << B.second << ")=" << B.Summa() << endl;
    cout << "указатели" << endl;//указатели 
    fraction* X = new fraction;//выделение памяти под динамическую переменную 
    X->Init(2, 5);//инициализация 
    X->Show();//вывод значений полей 
    X->Summa();//вычисление суммы купюр 
    cout << "X.Summa(" << X->first << "," << X->second << ")=" << X->Summa() << endl;
    //массивы 
    cout << "массивы" << endl;
    fraction mas[3];//определение массива
    int i;
    for (i = 0; i < 3; i++)
    { 
        cout << "пачка денег №"<< i + 1 << endl;
        mas[i].Read();//чтение значений полей 
    } 
    for (i = 0; i < 3; i++)
    { 
        cout << "пачка денег №" << i + 1 << endl;
        mas[i].Show(); //вывод значений полей
    }
    
    for (i = 0; i < 3; i++)
    {
        cout << "пачка денег №" << i+1 << endl;
        mas[i].Summa(); //вычисление денежной суммы
        cout << "mas[" << i << "].Summa(" << mas[i].first << "," << mas[i].second << ")=";
        cout << mas[i].Summa() << endl;
    }
    //динамические масивы 
    cout << "динамические масивы" << endl;
    fraction* p_mas = new fraction[3];//выделение памяти 
    for (int i = 0; i < 3; i++)
    { 
        cout << "пачка денег №" << i + 1 << endl;
        p_mas[i].Read();//чтение значений полей 
    }
    for (i = 0; i < 3; i++)
    { 
        cout << "пачка денег №" << i + 1 << endl;
        p_mas[i].Show();//вывод значений полей
    }

    for (i = 0; i < 3; i++)
    {
        cout << "пачка денег №" << i + 1 << endl;
        p_mas[i].Summa();//вычисление денежной суммы 
        cout << "p_mas[" << i << "].Summa(" << p_mas[i].first << "," << p_mas[i].second;
        cout << ")=" << p_mas[i].Summa() << endl;
    }
    cout << "Вызов функции make_fraction\n";
    int y; int z;
    cout << "first?"; cin >> y;
    int s1, d1[9] = { 1,2,5,10,50,100,500,1000,5000 };;
    while (true)
    {
        s1 = 0;
        cout << "Введите число из списка:\n";
        cout << "1, 2, 5, 10, 50, 100, 500, 1000, 5000\n";
        cout << "second?"; cin >> z;
        for (int j1 = 0; j1 < 9; j1++)
            if (z == d1[j1]) s1 = 1;
        if (s1 == 1) break;
    }
    //переменная F формируется с помощью функции make_fraction() 
    fraction F = make_fraction(y, z);
    F.Show();
    system("pause");
 }