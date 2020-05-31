#include "book.h" 
#include <iostream> 
#include <string> 
using namespace std;
//����������� ��� ���������� 
book::book()
{
    title = "";
    author = "";
    year = 0;
    cout << "����������� ��� ���������� ��� ������� " << this << endl;
}
//����������� � ����������� 
book::book(string T, string A, int Y)
{
    title = T;
    author = A;
    year = Y;
    cout << "����������� � ����������� ��� ������� " << this << endl;
}
//����������� ����������� 
book::book(const book& b)
{
    title = b.title;
    author = b.author;
    year = b.year;    cout << "����������� ����������� ��� ������� " << this << endl;
}
//���������� 
book::~book()
{
    cout << "���������� ��� ������� " << this << endl;
}
//��������� 
string book::get_title()
{
    return title;
}
string book::get_author()
{
    return author;
}
int book::get_year()
{
    return year;
}
//������������ 
void book::set_title(string T)
{
    title = T;
}
void book::set_author(string A)
{
    author = A;
}
void book::set_year(int Y)
{
    year = Y;
}
//����� ��� ��������� ��������� 
void book::show()
{
    cout << "�������� �����: " << title << endl;
    cout << "����� �����: " << author << endl;
    cout << "��� �������: " << year << endl;
}