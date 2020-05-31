#include "Person.h"
Person::Person(void)
{
	name = "";
	age = 0;
}
//���������� 
Person::~Person(void)
{
}
//���������� � ����������� 
Person::Person(string N, int A)
{
	name = N;
	age = A;
}
//����������� ����������� 
Person::Person(const Person& c)
{
	name = c.name;
	age = c.age;
}
//��������� 
void Person::Set_name(string N)
{
	name = N;
}
void Person::Set_age(int A)
{
	age = A;
}
//�������� ������������ 
Person& Person::operator=(const Person& c)
{
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//����� ��� ��������� ��������� 
void Person::Show()
{
	cout << "��� : " << name;
	cout << "\n������� : " << age;
	cout << "\n";
}
//����� ��� ����� �������� ��������� 
void Person::Input()
{
	cout << "���:"; cin >> name;
	cout << "�������:"; cin >> age;
}
void Person::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)//�������-��������� 
	{
		switch (e.command)
		{
		case cmAll:
			cout << "���: " << Get_name() << endl;
			break;
		}
	}
}