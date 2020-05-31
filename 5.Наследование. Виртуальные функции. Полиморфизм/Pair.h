#pragma once
#include "object.h" 
#include <iostream> 
using namespace std;
class Pair : public Object
{
public:
    Pair(void);
public:
    virtual ~Pair(void);
    void Show();//функция для просмотра атрибутов класса с помощью указателя 
    Pair(int, int);
    Pair(const Pair&);
    int Get_first() { return first; }
    int Get_second() { return second; }
    
    void Set_first(int);
    void Set_second(int);
    int Set_mult();

    Pair& operator=(const Pair&);    
    friend istream& operator>>(istream& in, Pair& c);
    friend ostream& operator<<(ostream& out, const Pair& c);

protected:
    int first;
    int second;
};