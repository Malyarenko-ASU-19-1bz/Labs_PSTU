#pragma once
#include "Pair.h"

//����� Rectangle ����������� �� ������ Pair
class Rectangle : public Pair
{
public:
	Rectangle(void);//����������� ��� ����������

public:
	~Rectangle(void);//����������

	Rectangle(int,int);//����������� � �����������

	Rectangle(const Rectangle&);//����������� �����������

	int Get_area(){return area;}//��������

	void Set_area(int,int);//�����������

	int Get_per() { return per; }//��������

	void Set_per(int,int);//�����������

	Rectangle& operator=(const Rectangle&);//�������� ������������

	friend istream& operator>>(istream& in, Rectangle& r);//�������� �����

	friend ostream& operator<<(ostream& out,const Rectangle& r); //�������� ������

	protected:
		int area;//�������
		int per;//��������
};