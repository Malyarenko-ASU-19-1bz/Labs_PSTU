#include <iostream>
#include "fraction.h"
using namespace std;

fraction make_fraction(int F, int S)
{
    fraction t;//������� ��������� ����������  
    t.Init(F, S);//���������������� ���� ���������� t � ������� ���������� ������� 
    return t;//������� �������� ���������� t 
}

void main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    //����������� ���������� � � � 
    fraction A;
    fraction B;
    A.Init(3, 2);//������������� ���������� �
    cout << "���� ����� ���������� �" << endl;
    B.Read();//���� ����� ���������� �
    cout << "�������� ����� ���������� �" << endl;
    A.Show();//����� �������� ����� ���������� �
    cout << "�������� ����� ���������� �" << endl;
    B.Show();//����� �������� ����� ���������� � 
  //����� �������� �����, ������������ � ������� ������� Summa() 
    cout << "����� �������� �����" << endl;
    cout << "A.Summa(" << A.first << "," << A.second << ")=" << A.Summa() << endl;
    cout << "B.Summa(" << B.first << "," << B.second << ")=" << B.Summa() << endl;
    cout << "���������" << endl;//��������� 
    fraction* X = new fraction;//��������� ������ ��� ������������ ���������� 
    X->Init(2, 5);//������������� 
    X->Show();//����� �������� ����� 
    X->Summa();//���������� ����� ����� 
    cout << "X.Summa(" << X->first << "," << X->second << ")=" << X->Summa() << endl;
    //������� 
    cout << "�������" << endl;
    fraction mas[3];//����������� �������
    int i;
    for (i = 0; i < 3; i++)
    { 
        cout << "����� ����� �"<< i + 1 << endl;
        mas[i].Read();//������ �������� ����� 
    } 
    for (i = 0; i < 3; i++)
    { 
        cout << "����� ����� �" << i + 1 << endl;
        mas[i].Show(); //����� �������� �����
    }
    
    for (i = 0; i < 3; i++)
    {
        cout << "����� ����� �" << i+1 << endl;
        mas[i].Summa(); //���������� �������� �����
        cout << "mas[" << i << "].Summa(" << mas[i].first << "," << mas[i].second << ")=";
        cout << mas[i].Summa() << endl;
    }
    //������������ ������ 
    cout << "������������ ������" << endl;
    fraction* p_mas = new fraction[3];//��������� ������ 
    for (int i = 0; i < 3; i++)
    { 
        cout << "����� ����� �" << i + 1 << endl;
        p_mas[i].Read();//������ �������� ����� 
    }
    for (i = 0; i < 3; i++)
    { 
        cout << "����� ����� �" << i + 1 << endl;
        p_mas[i].Show();//����� �������� �����
    }

    for (i = 0; i < 3; i++)
    {
        cout << "����� ����� �" << i + 1 << endl;
        p_mas[i].Summa();//���������� �������� ����� 
        cout << "p_mas[" << i << "].Summa(" << p_mas[i].first << "," << p_mas[i].second;
        cout << ")=" << p_mas[i].Summa() << endl;
    }
    cout << "����� ������� make_fraction\n";
    int y; int z;
    cout << "first?"; cin >> y;
    int s1, d1[9] = { 1,2,5,10,50,100,500,1000,5000 };;
    while (true)
    {
        s1 = 0;
        cout << "������� ����� �� ������:\n";
        cout << "1, 2, 5, 10, 50, 100, 500, 1000, 5000\n";
        cout << "second?"; cin >> z;
        for (int j1 = 0; j1 < 9; j1++)
            if (z == d1[j1]) s1 = 1;
        if (s1 == 1) break;
    }
    //���������� F ����������� � ������� ������� make_fraction() 
    fraction F = make_fraction(y, z);
    F.Show();
    system("pause");
 }