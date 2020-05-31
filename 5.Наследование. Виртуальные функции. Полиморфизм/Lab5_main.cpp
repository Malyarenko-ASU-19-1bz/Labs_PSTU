
#include "Object.h"
#include "Pair.h"
#include "Rectangle.h"
#include "Vector.h"
#include <iostream>
using namespace std;

void main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №5\n**Наследование. Виртуальные функции. Полиморфизм**\n";
    int z, x, y;

    while(true)
    { 
        cout << "Введите количество станиц с данными (кроме 0): ";
        cin >> z;
        if (z != 0) break;
    }

    Vector *v = new Vector [z];//вектор из z элементов    
    Pair *a = new Pair [z];//объект класса Pair
    Rectangle *b = new Rectangle[z];// объект класса Rectangle
        
    for(int j=0;j<z;j++)
    {
        cout << "\nСтраница с данными №" << j +1 << endl;
        cin >> a[j];
        x = a[j].Get_first();
        y = a[j].Get_second();
        Rectangle tmp(x, y);// объект класса Rectangle
        b[j] = tmp;

        /*cin>>b[j];*/
        cout << a[j];
        cout << b[j];

        Pair tmp1;
        Rectangle tmp2;
        Object *p;
        tmp1 = a[j];
        tmp2 = b[j];

        p = &tmp1;//ставим указатель на объект класса Pair
        v[j].Add(p);//добавляем объект в вектор
        cout << v[j];//вывод вектора

        p = &tmp2;//ставим указатель на объект класса Rectangle
        v[j].Add(p); //добавляем объект в вектор
        cout << v[j];//вывод вектора

        
    }
    system("pause");
    delete[] a;
    delete[] b;
    delete[] v;
}