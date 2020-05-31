#pragma once
#include <iostream>
using namespace std;

class Pair
{
//конструктор без параметров 
public:
	Pair(void);

public:
	//деструктор
	virtual ~Pair(void);

	//констрктор с параметрами
	Pair(int, int);

	//конструктор копирования
	Pair(const Pair&);

	//селекторы
	int Get_fir() { return first; }
	int Get_sec() { return second; } 
	
	//модификаторы
	void Set_fir(int); 
	void Set_sec(int);

	int get_aria();// произведение

	//перегрузка операции присваивания
	Pair& operator=(const Pair&);

	//глобальные операторы-функции ввода-вывода
	friend istream& operator>>(istream& in, Pair& p);
	friend ostream& operator<<(ostream& out, const Pair& p);

//атрибуты
protected:
	int first;
	int second;
};