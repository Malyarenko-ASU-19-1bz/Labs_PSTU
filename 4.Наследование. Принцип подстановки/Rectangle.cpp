#include <iostream>
#include "Rectangle.h"
using namespace std;

//конструктор без параметров
Rectangle::Rectangle(void) : Pair()
{
	area = 0;
	per = 0;
}

//дестрктор
Rectangle::~Rectangle(void){}

//конструктор с параметрами
Rectangle::Rectangle(int F, int S) : Pair(F, S)
{
	area = F * S;
	per = 2 * (S + F);
}

//конструктор копирования
Rectangle::Rectangle(const Rectangle& r)
{
	first = r.first;
	second = r.second;
	area = r.first * r.second;
	per = 2 * (r.first + r.second);
}

//модификаторы
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

//оперция присваивания
Rectangle& Rectangle::operator=(const Rectangle& r)
{
	if (&r == this)return *this;
	first = r.first;
	second = r.second;
	area = r.area;
	per = r.per;
	return *this;
}

//операция ввода
istream& operator>>(istream& in, Rectangle& r)
{
	cout << "\nВведите длину первой стороны прямоугольника: ";
	in >> r.first;
	cout << "Введите длину второй стороны прямоугольника: ";
	in >> r.second;
	r.area = r.first * r.second;
	r.per = (r.first + r.second) * 2;
	return in;
}

//операция вывода
ostream& operator<<(ostream& out, const Rectangle& r)
{
	out << "\nПлощадь прямоугольника со сторонами " << r.first << " и " << r.second << " равна " << r.area;
	out << "\nПериметр прямоугольника со сторонами " << r.first << " и " << r.second << " равен " << r.per << endl;
	return out;
}