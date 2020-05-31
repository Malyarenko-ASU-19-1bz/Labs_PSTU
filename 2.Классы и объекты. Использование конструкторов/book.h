#pragma once
#include <iostream> 
#include <string> 
using namespace std;
class book
{
    //атрибуты 
    string title;
    string author;
    int year;
public:
    book();//конструктор без параметров 
    book(string, string, int);//конструктор с параметрами 
    book(const book&);//конструктор копирования 
    ~book();//деструктор 
    string get_title();//селектор
    string get_author();//селектор
    int get_year();//селектор 
    void set_author(string);//модификатор
    void set_title(string); //модификатор         
    void set_year(int); //модификатор 
    void show();//просмотр атрибутов 
};