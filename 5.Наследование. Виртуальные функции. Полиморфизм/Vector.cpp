#include "Vector.h" 
//����������� ��� ���������� 
Vector::Vector(void)
{
    beg = new Object*;
}
//���������� 
Vector::~Vector(void)
{
    if (beg != 0)delete beg;
    beg = 0;
}
//���������� �������, �� ������� ��������� ��������� p � ������ 
void Vector::Add(Object* p)
{
    *beg = p;        
}
//�������� ������ 
ostream& operator<<(ostream& out, const Vector& t)
{
    Object** p = t.beg;//��������� �� ��������� ���� Object
    (*p)->Show();//����� ������ Show() (������� ����������)
    return out;
}