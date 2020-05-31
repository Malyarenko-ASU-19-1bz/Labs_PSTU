#include "book.h" 
#include <iostream> 
#include <string> 
using namespace std;
//конструктор без параметров 
book::book()
{
    title = "";
    author = "";
    year = 0;
    cout << "Конструктор без параметров для объекта " << this << endl;
}
//конструктор с параметрами 
book::book(string T, string A, int Y)
{
    title = T;
    author = A;
    year = Y;
    cout << "Конструктор с параметрами для объекта " << this << endl;
}
//конструктор копирования 
book::book(const book& b)
{
    title = b.title;
    author = b.author;
    year = b.year;    cout << "Конструктор копирования для объекта " << this << endl;
}
//деструктор 
book::~book()
{
    cout << "Деструктор для объекта " << this << endl;
}
//селекторы 
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
//модификаторы 
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
//метод для просмотра атрибутов 
void book::show()
{
    cout << "Название книги: " << title << endl;
    cout << "Автор книги: " << author << endl;
    cout << "Год издания: " << year << endl;
}