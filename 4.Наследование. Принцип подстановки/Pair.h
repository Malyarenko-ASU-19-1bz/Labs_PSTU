#pragma once
#include <iostream>
using namespace std;

class Pair
{
//����������� ��� ���������� 
public:
	Pair(void);

public:
	//����������
	virtual ~Pair(void);

	//���������� � �����������
	Pair(int, int);

	//����������� �����������
	Pair(const Pair&);

	//���������
	int Get_fir() { return first; }
	int Get_sec() { return second; } 
	
	//������������
	void Set_fir(int); 
	void Set_sec(int);

	int get_aria();// ������������

	//���������� �������� ������������
	Pair& operator=(const Pair&);

	//���������� ���������-������� �����-������
	friend istream& operator>>(istream& in, Pair& p);
	friend ostream& operator<<(ostream& out, const Pair& p);

//��������
protected:
	int first;
	int second;
};