#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle() :Pair()
{
    area = Get_first()* Get_second();
    p_meter = 2*(Get_first() + Get_second());
}
Rectangle::~Rectangle(void)
{
}
Rectangle::Rectangle(int F, int S) :Pair(F,S)
{
    area = F*S;
    p_meter = 2 * (F + S);
}
Rectangle::Rectangle(const Rectangle& L)
{
    first = L.first;
    second = L.second;
    area = L.first*L.second;
    p_meter = 2*(L.first + L.second);
}

Rectangle& Rectangle::operator=(const Rectangle& l)
{
    if (&l == this)return *this;
    first = l.first;
    second = l.second;
    area = l.area;
    p_meter = l.p_meter;
    return *this;
}
istream& operator>>(istream& in, Rectangle& l)
{
    cout << "\n������ ��������� ����� � ������� Rectangle";
    cout << "\n������� ����� ������ ������� ��������������:"; in >> l.first;
    cout << "������� ����� ������ ������� ��������������:"; in >> l.second;
    l.area = l.first * l.second;
    l.p_meter = 2 * (l.first + l.second);
    return in;
}
ostream& operator<<(ostream& out, const Rectangle& l)
{
    cout << "\n������ ��������� ������ � ������� Rectangle";
    out << "\n������� �������������� �� ��������� " << l.first << " � " << l.second << " ����� " << l.area;
    out << "\n�������� �������������� �� ��������� " << l.first << " � " << l.second << " ����� " << l.p_meter;
    out << "\n";
    return out;
}
void Rectangle::Show()
{
    cout << "\n������ ������� Show() � ������� Rectangle";
    cout << "\n������� �������������� �� ��������� " << first << " � " << second << " ����� " << area;
    cout << "\n�������� �������������� �� ��������� " << first << " � " << second << " ����� " << p_meter;
    cout << "\n";
}