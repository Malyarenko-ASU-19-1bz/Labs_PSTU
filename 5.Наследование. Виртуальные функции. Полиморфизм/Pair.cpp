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
    cout << "\nРабота оператора ввода с классом Pair";
    cout << "\nВведите первое число:"; in >> c.first;
    cout << "Введите второе число:"; in >> c.second;    
    return in;
}
ostream& operator<<(ostream& out, const Pair& c)
{
    out << "\nРабота оператора вывода с классом Pair";
    out << "\nПервое число : " << c.first;
    out << "\nВторое число : " << c.second;
    out << "\nПроизведение чисел равно " << c.first* c.second << endl;
    return out;
}
void Pair::Show()
{
    cout << "\nРабота функции Show() с классом Pair";
    cout << "\nЧисла " << first<<" и "<< second;
    cout << "\nПроизведение чисел равно " << Set_mult() << endl;
}