#pragma once
#include <iostream> 
#include <string> 
using namespace std;
class book
{
    //�������� 
    string title;
    string author;
    int year;
public:
    book();//����������� ��� ���������� 
    book(string, string, int);//����������� � ����������� 
    book(const book&);//����������� ����������� 
    ~book();//���������� 
    string get_title();//��������
    string get_author();//��������
    int get_year();//�������� 
    void set_author(string);//�����������
    void set_title(string); //�����������         
    void set_year(int); //����������� 
    void show();//�������� ��������� 
};