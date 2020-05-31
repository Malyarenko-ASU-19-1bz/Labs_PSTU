#include "Pair.h"

//конструктор без параметров
Pair::Pair(void)
{
first=0;
second=0;
}

//деструктор
Pair::~Pair(void){}

//конструктор с параметрами
Pair::Pair(int F,int S)
{
first=F;
second=S;
}

//конструктор копирования
Pair::Pair(const Pair& Pair)
{
first = Pair.first;
second = Pair.second;
}

//модификаторы
void Pair::Set_fir(int F)
{
first=F;
}

void Pair::Set_sec(int S)
{
second=S;
}

int Pair::get_aria()//произведение
{
	return first * second;
}


//перегрузка операции присваивания
Pair& Pair::operator=(const Pair&p)
{
if(&p==this)return *this;
first=p.first;
second=p.second;
return *this;
}

//глобальная функция для ввода
istream& operator>>(istream&in, Pair&p)
{
cout<<"\nВведите длину первой стороны прямоугольника: ";
in>>p.first;
cout<<"Введите длину второй стороны прямоугольника: ";
in>>p.second;
cout << endl;
return in;
}

//глобальная функция для вывода
ostream& operator<<(ostream&out,const Pair&p)
{
out<<"\nПервая сторона прямоугольника: "<<p.first;
out << "\nВторая сторона прямоугольника: " << p.second << endl;
return out;
}