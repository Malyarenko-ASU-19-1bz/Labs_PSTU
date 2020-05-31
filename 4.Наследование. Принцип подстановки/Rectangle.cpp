#include <iostream>
#include "Rectangle.h"
using namespace std;

//����������� ��� ����������
Rectangle::Rectangle(void) : Pair()
{
	area = 0;
	per = 0;
}

//���������
Rectangle::~Rectangle(void){}

//����������� � �����������
Rectangle::Rectangle(int F, int S) : Pair(F, S)
{
	area = F * S;
	per = 2 * (S + F);
}

//����������� �����������
Rectangle::Rectangle(const Rectangle& r)
{
	first = r.first;
	second = r.second;
	area = r.first * r.second;
	per = 2 * (r.first + r.second);
}

//������������
void Rectangle::Set_area(int F, int S)
{
	first = F;
	second = S;
	area = F * S;
}

void Rectangle::Set_per(int F, int S)
{
	first = F;
	second = S;
	per = 2 * (F + S);
}

//������� ������������
Rectangle& Rectangle::operator=(const Rectangle& r)
{
	if (&r == this)return *this;
	first = r.first;
	second = r.second;
	area = r.area;
	per = r.per;
	return *this;
}

//�������� �����
istream& operator>>(istream& in, Rectangle& r)
{
	cout << "\n������� ����� ������ ������� ��������������: ";
	in >> r.first;
	cout << "������� ����� ������ ������� ��������������: ";
	in >> r.second;
	r.area = r.first * r.second;
	r.per = (r.first + r.second) * 2;
	return in;
}

//�������� ������
ostream& operator<<(ostream& out, const Rectangle& r)
{
	out << "\n������� �������������� �� ��������� " << r.first << " � " << r.second << " ����� " << r.area;
	out << "\n�������� �������������� �� ��������� " << r.first << " � " << r.second << " ����� " << r.per << endl;
	return out;
}