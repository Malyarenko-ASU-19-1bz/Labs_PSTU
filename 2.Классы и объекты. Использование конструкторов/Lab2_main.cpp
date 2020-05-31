#include "book.h" 
#include <iostream> 
#include <string> 
using namespace std;
//функция для возврата объекта как результата 
book make_book()
{
    string t;
    string a;
    int y;
    cout << "Введите название книги: ";
    cin >> t;
    cout << "Введите автора книги: ";    cin >> a;
    cout << "Ввдите год издания: ";
    cin >> y;
    book b(t, a, y);
    return b;
}
//функция для передачи объекта как параметра 
void print_book(book b)
{
    b.show();
}
void main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа  №2\n**Классы и объекты. Использование конструкторов**" << endl;

    //конструктор без параметров
    cout << "Конструктор без параметров (объект b1)"<<endl;
    book b1;
    b1.show();
    //коструктор с параметрами
    cout << "конструктор c параметрами (объект b2)" << endl;
    book b2("Си++ для чайников", "Аборин А.М.", 2010);
    b2.show();
    //конструктор копирования
    cout << "конструктор копирования (объекты b3=b2)" << endl;
    book b3 = b2;
    cout << "Работа модификаторов с объектом b3" << endl;
    b3.set_title("Как программировать на языке Си++");
    b3.set_author("Бьорн Страуструп");
    b3.set_year(2007);
    //вывод объекта b3
    b3.show();
    cout << "функция print_book() для передачи объекта b3 как параметра" << endl;
    print_book(b3);
    //конструктор копирования
    cout << "функция make_book() для возврата объекта b1 как результата" << endl;
    b1 = make_book();
    b1.show();
    system("pause");
}