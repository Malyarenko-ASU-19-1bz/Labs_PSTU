#pragma once
#include "Time.h" 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <cmath>
using namespace std;
int make_file(const char* f_name)
{
    fstream stream(f_name, ios::out | ios::trunc);//открыть для записи 
    if (!stream)return -1;//ошибка открытия файла 
    int n;
    Time p;
    cout << "Введите количество записей:"; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;//ввод атрибутов объекта из стандартного потока 
        stream << p << "\n";//запись объекта в файловый поток 
    }
    stream.close();//закрыть поток 
    return n;//вернуть количество записанных объектов 
}
int print_file(const char* f_name)
{
    fstream stream(f_name, ios::in);//открыть для чтения 
    if (!stream)return -1;//ошибка открытия файла 
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
    fstream temp("temp", ios::out);//открыть для записи 
    fstream stream(f_name, ios::in);//открыть для чтения 
    if (!stream)return -1;//ошибка открытия файла
    cout << "Введите интервал\n";
    int m, s;
    cout << "Минуты: "; cin >> m;
    cout << "Секунды: "; cin >> s;    
    int i = 0; Time t(m,s);
    Time p;
    while (stream >> p)//пока нет конца файла выполняем чтение объекта 
    {
        //если прочитан признак конца файла,то выход из цикла
        
        if (stream.eof()) break;
        i++;
        if ((p != t)==false) temp << p;         
    }
    //закрыть файлы 
    stream.close(); temp.close();
    remove(f_name);//удалить старый файл 
    rename("temp", f_name);// переименовать temp 
    return i;//количество прочитанных  
}
int add_file(const char* f_name)
{
    fstream temp("temp", ios::out);//открыть для записи 
    fstream stream(f_name, ios::in);//открыть для чтения 
    if (!stream)return -1;//ошибка открытия файла 
    int k;
    cout << "Введите количество добавляемых записей: ";
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
        temp << p;//записать в temp новую запись        
    }
    stream.close();
    temp.close();
    remove(f_name);
    rename("temp", f_name);
    return l;//количество добавленных 
}
int change_file(const char* f_name)
{
    fstream temp("temp", ios::out);//открыть для записи 
    fstream stream(f_name, ios::in);//открыть для чтения 
    if (!stream)return -1;//ошибка открытия файла 
    Time p;
    Time pp;
    int l = 0;
    cout << "Введите интервал\n";
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
    return l;//количество измененных элементов 
}
int minus_file(const char* f_name)
{
    fstream stream(f_name, ios::in);//открыть для чтения
    if (!stream)return -1;//ошибка открытия файла
    int n1, n2, i = 0;
    cout << "Введите номер первой записи: ";
    cin >> n1;
    cout << "Введите номер второй записи: ";
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
    cout << "Разница между интервалами " << p << endl;
    return i;
}