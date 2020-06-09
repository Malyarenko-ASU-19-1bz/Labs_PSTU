#pragma once
#include "Error.h"
#include <iostream>

const int MAX_SIZE = 20;

class Vector
{
	int size;
	int size_first;
	int* beg;
public:
	Vector() { size_first = 0; size = 0; beg = 0; }
	Vector(int s);
	Vector(int s, int* mas);
	Vector(const Vector& v);
	~Vector();
	const Vector& operator=(const Vector& v);
	int operator[](int i);
	void Add();
	void Del();
	int operator () ();
	friend ostream& operator<<(ostream& out, const Vector& v);
	friend istream& operator>>(istream& in, Vector& v);
};