#include "Vector.h" 
#include "Error.h" 
#include <iostream> 
using namespace std;


int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    cout << "������������ ������  �9\n";
    cout << "**��������� �������������� ��������**\n";
    try
    {
        int n = 0, add = 0, del = 0, index, len;
        
        cout << "������� ������ ������� (�� ����� 20):";
        cin >> n;
        if (n > MAX_SIZE || n < 0) throw error("�������� ������������ ������!\n");
        if (n == 0) throw error("������ ������!\n");

        Vector x(n);
        cout << "������ x ������: ";
        x.Show();        
        cout << "������ ������� x: " << x() << endl;
        
        cout << "������� ���������� ��������� ���������: ";
        cin >> del;
        len = x();
        x - del;        
        cout << "�� ����� ������� x ������� �������� � ���������� " << len - x() << " ��.: " << endl;
        x.Show();
        cout << "������ ������� x: " << x() << endl;

        cout << "������� ���������� ����������� ���������: ";
        cin >> add;
        len = x();
        x + add;
        cout << "� ����� ������� x ��������� �������� � ���������� " << x() - len << " ��.: " << endl;
        x.Show();
        cout << "������ ������� x: " << x() << endl;

        cout << "������� ����� ��������:";
        cin >> index;
        if (index < 0) throw error("������ ������ ����!\n");
        if (index > x()) throw error("������� ������ �������� �������!\n");
        cout << "������� ������� �" << index << ":  " << x[index] << endl;
    }
    catch (error e)
    {
        e.what();
    }
    system("pause");
    return 0;
}
