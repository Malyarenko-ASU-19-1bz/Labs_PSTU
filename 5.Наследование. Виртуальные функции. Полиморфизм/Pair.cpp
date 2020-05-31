#include "Pair.h"
#include <iostream>
using namespace std;
Pair::Pair(void)
{
    first = 0;
    second = 0;    
}
Pair::~Pair(void)
{
}
Pair::Pair(int F, int S)
{
    first = F;
    second = S;    
}
Pair::Pair(const Pair& pair)
{
    first = pair.first;
    second = pair.second;    
}
void Pair::Set_first(int F)
{
    first = F;
}
void Pair::Set_second(int S)
{
    second = S;
}

int Pair::Set_mult()
{
    int f, s;
    f = first;
    s = second;
    return f * s;
}

Pair& Pair::operator=(const Pair& c)
{
    if (&c == this)return *this;
    first = c.first;
    second = c.second;
    return *this;
}
istream& operator>>(istream& in, Pair& c)
{
    cout << "\n������ ��������� ����� � ������� Pair";
    cout << "\n������� ������ �����:"; in >> c.first;
    cout << "������� ������ �����:"; in >> c.second;    
    return in;
}
ostream& operator<<(ostream& out, const Pair& c)
{
    out << "\n������ ��������� ������ � ������� Pair";
    out << "\n������ ����� : " << c.first;
    out << "\n������ ����� : " << c.second;
    out << "\n������������ ����� ����� " << c.first* c.second << endl;
    return out;
}
void Pair::Show()
{
    cout << "\n������ ������� Show() � ������� Pair";
    cout << "\n����� " << first<<" � "<< second;
    cout << "\n������������ ����� ����� " << Set_mult() << endl;
}