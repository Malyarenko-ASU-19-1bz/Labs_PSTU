#include "Vector.h"
#include "Dialog.h"
void main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "rus");
	cout << "������������ ������  �8\n**���������, ����������� ���������**\n";
	cout << "�������� ������:\n";
	cout << "'m' - ������� ������\n";
	cout << "'+' - �������� ������ � ������\n";
	cout << "'-' - ������� ������ �� ������\n";
	cout << "'s' - �������� ��� ������\n";
	cout << "'z' - �������� ��� ������\n";
	cout << "'a' - �������� ����� ���� �������\n";
	cout << "'q' - ����� �� ���������\n";
	Dialog D;
	D.Execute();
	system("pause");
}