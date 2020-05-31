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
	cout << "��� : " << name;
	cout << "\n������� : " << age;
	cout << "\n�����  : " << many;
	cout << "\n��������� : " << titul;
	cout << "\n";
}
void Employee::Input()
{
	cout << "���:"; cin >> name;
	cout << "�������:"; cin >> age;
	cout << "�����:"; cin >> many;
	cout << "��������� : "; cin >> titul;
}