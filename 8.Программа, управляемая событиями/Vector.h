#pragma once
#include "Employee.h"
class Vector
{
public:
	Vector();
	Vector(int);//����������� � ����������� 
public:
	~Vector(void);//���������� 
	void Add();//���������� �������� � ������ 
	void Del();
	void Show();
	void HandleEvent(const TEvent& e);
	int operator()();//������ �������
public:
	Object** data;//��������� �� ������
	int size;//������ 
	int cur;//������� ������� 
};