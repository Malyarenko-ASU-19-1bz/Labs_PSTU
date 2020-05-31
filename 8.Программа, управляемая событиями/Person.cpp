#include "Person.h"
Person::Person(void)
{
	name = "";
	age = 0;
}
//деструктор 
Person::~Person(void)
{
}
//констрктор с параметрами 
Person::Person(string N, int A)
{
	name = N;
	age = A;
}
//конструктор копирования 
Person::Person(const Person& c)
{
	name = c.name;
	age = c.age;
}
//селекторы 
void Person::Set_name(string N)
{
	name = N;
}
void Person::Set_age(int A)
{
	age = A;
}
//оператор присваивания 
Person& Person::operator=(const Person& c)
{
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//метод для просмотра атрибутов 
void Person::Show()
{
	cout << "Имя : " << name;
	cout << "\nВозраст : " << age;
	cout << "\n";
}
//метод для ввода значений атрибутов 
void Person::Input()
{
	cout << "Имя:"; cin >> name;
	cout << "Возраст:"; cin >> age;
}
void Person::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)//событие-сообщение 
	{
		switch (e.command)
		{
		case cmAll:
			cout << "Имя: " << Get_name() << endl;
			break;
		}
	}
}