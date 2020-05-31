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
    cout << "\nРабота оператора ввода с классом Rectangle";
    cout << "\nВведите длину первой стороны прямоугольника:"; in >> l.first;
    cout << "Введите длину второй стороны прямоугольника:"; in >> l.second;
    l.area = l.first * l.second;
    l.p_meter = 2 * (l.first + l.second);
    return in;
}
ostream& operator<<(ostream& out, const Rectangle& l)
{
    cout << "\nРабота оператора вывода с классом Rectangle";
    out << "\nПлощадь прямоугольника со сторонами " << l.first << " и " << l.second << " равна " << l.area;
    out << "\nПериметр прямоугольника со сторонами " << l.first << " и " << l.second << " равна " << l.p_meter;
    out << "\n";
    return out;
}
void Rectangle::Show()
{
    cout << "\nРабота функции Show() с классом Rectangle";
    cout << "\nПлощадь прямоугольника со сторонами " << first << " и " << second << " равна " << area;
    cout << "\nПериметр прямоугольника со сторонами " << first << " и " << second << " равна " << p_meter;
    cout << "\n";
}