#include "book.h" 
#include <iostream> 
#include <string> 
using namespace std;
//������� ��� �������� ������� ��� ���������� 
book make_book()
{
    string t;
    string a;
    int y;
    cout << "������� �������� �����: ";
    cin >> t;
    cout << "������� ������ �����: ";    cin >> a;
    cout << "������ ��� �������: ";
    cin >> y;
    book b(t, a, y);
    return b;
}
//������� ��� �������� ������� ��� ��������� 
void print_book(book b)
{
    b.show();
}
void main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    cout << "������������ ������  �2\n**������ � �������. ������������� �������������**" << endl;

    //����������� ��� ����������
    cout << "����������� ��� ���������� (������ b1)"<<endl;
    book b1;
    b1.show();
    //���������� � �����������
    cout << "����������� c ����������� (������ b2)" << endl;
    book b2("��++ ��� ��������", "������ �.�.", 2010);
    b2.show();
    //����������� �����������
    cout << "����������� ����������� (������� b3=b2)" << endl;
    book b3 = b2;
    cout << "������ ������������� � �������� b3" << endl;
    b3.set_title("��� ��������������� �� ����� ��++");
    b3.set_author("����� ����������");
    b3.set_year(2007);
    //����� ������� b3
    b3.show();
    cout << "������� print_book() ��� �������� ������� b3 ��� ���������" << endl;
    print_book(b3);
    //����������� �����������
    cout << "������� make_book() ��� �������� ������� b1 ��� ����������" << endl;
    b1 = make_book();
    b1.show();
    system("pause");
}