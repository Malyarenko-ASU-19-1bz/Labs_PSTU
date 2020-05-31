#pragma once 
#include "Pair.h"
using namespace std;
class Rectangle : public Pair
{
public:
    Rectangle(void);
public:
    ~Rectangle(void);
    void Show();//функция для просмотра атрибутов класса с помощью указателя 
    Rectangle(int, int);
    Rectangle(const Rectangle&);
    int Get_area() { return area; }
    int Get_per() { return p_meter; }
    Rectangle& operator=(const Rectangle&);
    friend istream& operator>>(istream& in, Rectangle& l);
    friend ostream& operator<<(ostream& out, const Rectangle& l);
protected:
    int area;
    int p_meter;
};