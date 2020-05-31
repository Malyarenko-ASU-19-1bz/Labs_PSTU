
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
    cout << "������������ ������ �5\n**������������. ����������� �������. �����������**\n";
    int z, x, y;

    while(true)
    { 
        cout << "������� ���������� ������ � ������� (����� 0): ";
        cin >> z;
        if (z != 0) break;
    }

    Vector *v = new Vector [z];//������ �� z ���������    
    Pair *a = new Pair [z];//������ ������ Pair
    Rectangle *b = new Rectangle[z];// ������ ������ Rectangle
        
    for(int j=0;j<z;j++)
    {
        cout << "\n�������� � ������� �" << j +1 << endl;
        cin >> a[j];
        x = a[j].Get_first();
        y = a[j].Get_second();
        Rectangle tmp(x, y);// ������ ������ Rectangle
        b[j] = tmp;

        /*cin>>b[j];*/
        cout << a[j];
        cout << b[j];

        Pair tmp1;
        Rectangle tmp2;
        Object *p;
        tmp1 = a[j];
        tmp2 = b[j];

        p = &tmp1;//������ ��������� �� ������ ������ Pair
        v[j].Add(p);//��������� ������ � ������
        cout << v[j];//����� �������

        p = &tmp2;//������ ��������� �� ������ ������ Rectangle
        v[j].Add(p); //��������� ������ � ������
        cout << v[j];//����� �������

        
    }
    system("pause");
    delete[] a;
    delete[] b;
    delete[] v;
}