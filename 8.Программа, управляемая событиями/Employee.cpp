#include "Employee.h"
Employee::Employee(void) :Person()
{
	many = 0;
	titul = "";
}
Employee::~Employee(void)
{
}
Employee::Employee(string M, int C, float P, string G) :Person(M, C)
{
	many = P;
	titul = G;
}
Employee::Employee(const Employee& L)
{
	name = L.name;
	age = L.age;
	titul = L.titul;
	many = L.many;
}
void Employee::Set_data(int P, string G)
{
	many = P;
	titul = G;
}
Employee& Employee::operator=(const Employee& l)
{
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	many = l.many;
	titul = l.titul;
	return *this;
}
void Employee::Show()
{
	cout << "Имя : " << name;
	cout << "\nВозраст : " << age;
	cout << "\nОклад  : " << many;
	cout << "\nДолжность : " << titul;
	cout << "\n";
}
void Employee::Input()
{
	cout << "Имя:"; cin >> name;
	cout << "Возраст:"; cin >> age;
	cout << "Оклад:"; cin >> many;
	cout << "Должность : "; cin >> titul;
}