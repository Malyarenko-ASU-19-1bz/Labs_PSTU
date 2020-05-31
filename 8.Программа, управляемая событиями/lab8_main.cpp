#include "Vector.h"
#include "Dialog.h"
void main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "rus");
	cout << "Лабораторная работа  №8\n**Программа, управляемая событиями**\n";
	cout << "Перечень команд:\n";
	cout << "'m' - создать группу\n";
	cout << "'+' - добавить запись в группу\n";
	cout << "'-' - удалить запись из группы\n";
	cout << "'s' - показать все записи\n";
	cout << "'z' - показать имя записи\n";
	cout << "'a' - показать имена всех записей\n";
	cout << "'q' - выход из программы\n";
	Dialog D;
	D.Execute();
	system("pause");
}