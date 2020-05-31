#include <iostream>
#include "fraction.h"
using namespace std;
//���������� ������ ��� ������������� ����� ��������� 
void fraction::Init(int F, int S)
{
	first = F; second = S;
}
//���������� ������ ��� ������ �������� ����� ��������� 
void fraction::Read()
{
	int d[9] = { 1,2,5,10,50,100,500,1000,5000 };
	cout << "first?"; cin >> first;
	int s;
	while (true)
	{
		s = 0;
		cout << "������� ����� �� ������:\n";
		cout << "1, 2, 5, 10, 50, 100, 500, 1000, 5000\n";	
		cout << "second?"; cin >> second;
		for (int j = 0; j < 9; j++)
			if (second == d[j]) s = 1;
		if (s == 1) break;
	}
}
//���������� ������ ��� ������ �������� ����� ��������� 
void fraction::Show()
{
	cout << "first=" << first << endl;
	cout << "second=" << second << endl;
}
//����� ��� ����� ����� 
int fraction::Summa()
{
	return first*second;
}