#include "Vector.h" 
//конструктор без параметров 
Vector::Vector(void)
{
    beg = new Object*;
}
//деструктор 
Vector::~Vector(void)
{
    if (beg != 0)delete beg;
    beg = 0;
}
//добавление объекта, на который указывает указатель p в вектор 
void Vector::Add(Object* p)
{
    *beg = p;        
}
//операция вывода 
ostream& operator<<(ostream& out, const Vector& t)
{
    Object** p = t.beg;//указатель на указатель типа Object
    (*p)->Show();//вызов метода Show() (позднее связывание)
    return out;
}