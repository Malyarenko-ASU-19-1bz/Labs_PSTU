#include <string> 
#include "file_work.h" 
using namespace std;
void main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    cout << "������������ ������  �10\n";
    cout << "**���������� ������ � ����� � �������������� �������**";

    int k, c;
    char file_name[30];
    do
    {    //���� 
        cout << "\n1. ������� ���� � �������� ����������� �������";
        cout << "\n2. �������� ������";
        cout << "\n3. �������� ������� �������� ��������� ��������";
        cout << "\n4. �������� ������ � ������ �����";
        cout << "\n5. ��������� �� 1:30 �������� ������� ������ ��������� ��������";
        cout << "\n6. ��������� ������� ���� ��������� ����������";
        cout << "\n0. ��������� ������\n";
        cin >> c;
        switch (c)
        {
        case 1: cout << "������� ��� �����: "; cin >> file_name;
            k = make_file(file_name);
            if (k < 0)cout << "���������� ������� ����!\n";
            break;
        case 2: cout << "������� ��� �����: "; cin >> file_name;
            k = print_file(file_name);
            if (k == 0)cout << "���� ������!\n";
            if (k < 0)cout << "���������� ��������� ����!\n";
            break;
        case 3: cout << "������� ��� �����: "; cin >> file_name;
            k = del_file(file_name);
            if (k < 0)cout << "���������� ��������� ����!\n";
            break;
        case 4: cout << "������� ��� �����: ";
            cin >> file_name;
            k = add_file(file_name);
            if (k < 0) cout << "\n���������� ��������� ����!";
            break;
        case 5: cout << "������� ��� �����: ";
            cin >> file_name;
            k = change_file(file_name);
            if (k == -1) cout << "\n���������� ��������� ����!\n";
            break;
        case 6: cout << "������� ��� �����: ";
            cin >> file_name;
            k = minus_file(file_name);
            if (k == -1) cout << "\n���������� ��������� ����!\n";
            if (k == -2) cout << "\n�������� ���� ��� ��� ������ ������!\n";
            break;
        }
    } while (c != 0);
    system("pause");
}