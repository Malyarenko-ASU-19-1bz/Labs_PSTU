#pragma once
#include "Employee.h"
class Vector
{
public:
	Vector();
	Vector(int);//конструктор с параметрами 
public:
	~Vector(void);//деструктор 
	void Add();//добавление элемента в вектор 
	void Del();
	void Show();
	void HandleEvent(const TEvent& e);
	int operator()();//размер вектора
public:
	Object** data;//указатель на массив
	int size;//размер 
	int cur;//текущая позиция 
};