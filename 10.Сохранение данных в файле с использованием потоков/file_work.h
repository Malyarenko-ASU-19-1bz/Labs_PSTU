#pragma once
#include "Time.h" 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <cmath>
using namespace std;
int make_file(const char* f_name)
{
    fstream stream(f_name, ios::out | ios::trunc);//������� ��� ������ 
    if (!stream)return -1;//������ �������� ����� 
    int n;
    Time p;
    cout << "������� ���������� �������:"; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;//���� ��������� ������� �� ������������ ������ 
        stream << p << "\n";//������ ������� � �������� ����� 
    }
    stream.close();//������� ����� 
    return n;//������� ���������� ���������� �������� 
}
int print_file(const char* f_name)
{
    fstream stream(f_name, ios::in);//������� ��� ������ 
    if (!stream)return -1;//������ �������� ����� 
    Time p; int i = 0;
    while (stream >> p)
    {
        cout << p << "\n";
        i++;
    }
    stream.close();
    return i;
}
int del_file(const char* f_name)
{    
    fstream temp("temp", ios::out);//������� ��� ������ 
    fstream stream(f_name, ios::in);//������� ��� ������ 
    if (!stream)return -1;//������ �������� �����
    cout << "������� ��������\n";
    int m, s;
    cout << "������: "; cin >> m;
    cout << "�������: "; cin >> s;    
    int i = 0; Time t(m,s);
    Time p;
    while (stream >> p)//���� ��� ����� ����� ��������� ������ ������� 
    {
        //���� �������� ������� ����� �����,�� ����� �� �����
        
        if (stream.eof()) break;
        i++;
        if ((p != t)==false) temp << p;         
    }
    //������� ����� 
    stream.close(); temp.close();
    remove(f_name);//������� ������ ���� 
    rename("temp", f_name);// ������������� temp 
    return i;//���������� �����������  
}
int add_file(const char* f_name)
{
    fstream temp("temp", ios::out);//������� ��� ������ 
    fstream stream(f_name, ios::in);//������� ��� ������ 
    if (!stream)return -1;//������ �������� ����� 
    int k;
    cout << "������� ���������� ����������� �������: ";
    cin >> k;
    Time p; int l = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> p;
        temp << p;
        l++;
    }
    while (stream >> p)
    {
        if (stream.eof())break;
        temp << p;//�������� � temp ����� ������        
    }
    stream.close();
    temp.close();
    remove(f_name);
    rename("temp", f_name);
    return l;//���������� ����������� 
}
int change_file(const char* f_name)
{
    fstream temp("temp", ios::out);//������� ��� ������ 
    fstream stream(f_name, ios::in);//������� ��� ������ 
    if (!stream)return -1;//������ �������� ����� 
    Time p;
    Time pp;
    int l = 0;
    cout << "������� ��������\n";
    cin >> pp;
    while (stream >> p)
    {
        if (stream.eof())break;        
        l++;
        if ((p != pp) == false) temp << p - 90;
        else temp << p;
    }
    stream.close(); temp.close();
    remove(f_name);
    rename("temp", f_name);
    return l;//���������� ���������� ��������� 
}
int minus_file(const char* f_name)
{
    fstream stream(f_name, ios::in);//������� ��� ������
    if (!stream)return -1;//������ �������� �����
    int n1, n2, i = 0;
    cout << "������� ����� ������ ������: ";
    cin >> n1;
    cout << "������� ����� ������ ������: ";
    cin >> n2;
    Time p, p1, p2;
    while (stream >> p)
    {
        if (stream.eof())break;
        i++;
        if (i == n1) p1 = p;
        if (i == n2) p2 = p;
    }
    if (n1 > i || n2 > i) return -2;
    p = p2 - p1;
    cout << "������� ����� ����������� " << p << endl;
    return i;
}