#include "Vector.h"
#include "Error.h" 
#include <iostream> 
using namespace std;

Vector::Vector(int s)
{
    if (s > MAX_SIZE) throw error("�������� ������������ ������!\n");
    size = s;
    first_size = s;
    beg = new int[s];
    for (int i = 0; i < size; i++)
        beg[i] = rand()%15;
}
Vector::~Vector()
{
    if (beg != 0) delete[]beg;
}
int Vector::operator [](int i)
{    
    if (i < 0) throw error("������ ������ ����!\n");
    if (i >= size) throw error("������� ������ �������� �������!\n");
    return beg[i-1];
}
void Vector::operator +(int a)
{
    if (size + a > first_size) throw error("�������� ������� ������!\n");
    for (int x = size+1; x <= size + a; x++)
    {
        cout << x << " ";
        beg[x-1] = rand() % 15;
    }

    size = size + a;
}
void Vector::operator -(int c)
{
    if (size == 0) throw error("������ ������!\n");
    if (size - c < 0) throw error("�������� ������� ������!\n");
    for(int x = size - c; x < size; x++)
    {
        beg [x] = 0;
        cout << x << " ";
    }
    size = size - c;
}
int Vector::operator () ()
{
    return size;
}
void Vector::Show()
{
    if (size == 0) throw error("������ ������!\n");
    for (int r = 0; r < size; r++) cout << beg[r] << " ";
    cout << endl;
}
