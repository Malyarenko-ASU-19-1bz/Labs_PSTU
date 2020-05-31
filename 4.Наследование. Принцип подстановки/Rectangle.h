#pragma once
#include "Pair.h"

//класс Rectangle наследуется от класса Pair
class Rectangle : public Pair
{
public:
	Rectangle(void);//конструктор без параметров

public:
	~Rectangle(void);//деструктор

	Rectangle(int,int);//конструктор с параметрами

	Rectangle(const Rectangle&);//конструктор копирования

	int Get_area(){return area;}//селектор

	void Set_area(int,int);//модификатор

	int Get_per() { return per; }//селектор

	void Set_per(int,int);//модификатор

	Rectangle& operator=(const Rectangle&);//операция присваивания

	friend istream& operator>>(istream& in, Rectangle& r);//операция ввода

	friend ostream& operator<<(ostream& out,const Rectangle& r); //операция вывода

	protected:
		int area;//площадь
		int per;//периметр
};