#include <string> 
#include "file_work.h" 
using namespace std;
void main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа  №10\n";
    cout << "**Сохранение данных в файле с использованием потоков**";

    int k, c;
    char file_name[30];
    do
    {    //Меню 
        cout << "\n1. Создать файл с заданным количеством записей";
        cout << "\n2. Показать записи";
        cout << "\n3. Удаление записей неравных заданному значению";
        cout << "\n4. Добавить записи в начало файла";
        cout << "\n5. Уменьшить на 1:30 значение записей равных заданному значению";
        cout << "\n6. Вычислить разницу двух выбранных интервалов";
        cout << "\n0. Завершить работу\n";
        cin >> c;
        switch (c)
        {
        case 1: cout << "Введите имя файла: "; cin >> file_name;
            k = make_file(file_name);
            if (k < 0)cout << "Невозможно создать файл!\n";
            break;
        case 2: cout << "Введите имя файла: "; cin >> file_name;
            k = print_file(file_name);
            if (k == 0)cout << "Файл пустой!\n";
            if (k < 0)cout << "Невозможно прочитать файл!\n";
            break;
        case 3: cout << "Введите имя файла: "; cin >> file_name;
            k = del_file(file_name);
            if (k < 0)cout << "Невозможно прочитать файл!\n";
            break;
        case 4: cout << "Введите имя файла: ";
            cin >> file_name;
            k = add_file(file_name);
            if (k < 0) cout << "\nНевозможно прочитать файл!";
            break;
        case 5: cout << "Введите имя файла: ";
            cin >> file_name;
            k = change_file(file_name);
            if (k == -1) cout << "\nНевозможно прочитать файл!\n";
            break;
        case 6: cout << "Введите имя файла: ";
            cin >> file_name;
            k = minus_file(file_name);
            if (k == -1) cout << "\nНевозможно прочитать файл!\n";
            if (k == -2) cout << "\nНеверные один или оба номера записи!\n";
            break;
        }
    } while (c != 0);
    system("pause");
}