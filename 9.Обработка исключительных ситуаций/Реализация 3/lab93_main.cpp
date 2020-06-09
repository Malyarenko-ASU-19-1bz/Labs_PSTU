#include "Vector.h" 
#include <string.h>
#include <iostream> 

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
            if (n > MAX_SIZE || n < 0) throw MaxSizeError();
            if (n == 0) throw EmptySizeError();
                    
            Vector x(n);
            cout << "������ x ������: ";
            cout << x;
            cout << "������ ������� x: "<< x()<< endl;

            len = x();
            x.Del();
            cout << "�� ����� ������� x ������� �������� � ���������� "<<len - x()<< " ��.: "<< endl;
            cout << x;
            cout << "������ ������� x: " << x() << endl;

            len = x();
            x.Add();
            cout << "� ����� ������� x ��������� �������� � ���������� " << x() - len << " ��.: " << endl;
            cout << x;
            cout << "������ ������� x: " << x() << endl;

            cout << "������� ����� ��������:";
            cin >> index;
            if (index < 0) throw IndexError1();
            if (index > x()) throw IndexError2();
            cout << "������� ������� �" << index << ":  "<< x[index] <<  endl;
    }    
    catch (Error& e)
    {
        e.what();
    }
    system("pause");
    return 0;
}