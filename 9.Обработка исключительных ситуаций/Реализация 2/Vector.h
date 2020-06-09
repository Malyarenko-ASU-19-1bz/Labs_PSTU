#pragma once 
#include <iostream> 
using namespace std;
const int MAX_SIZE = 20;
class Vector
{
	int size;
	int first_size;
	int* beg;
public:
	Vector(int s);
	~Vector();
	int operator[](int i);
	void operator+(int a);
	void operator-(int c);
	int operator () ();
	void Show();
};