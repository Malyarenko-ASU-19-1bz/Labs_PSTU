#include "Vector.h"
//деструктор 
Vector::~Vector(void)
{
    if (data != 0)delete[] data;
    data = 0;
}
Vector::Vector()
{
    size = 5;
    data = new Object * [size];
    cur = 0;
   
}
//конструктор с параметрами 
Vector::Vector(int n)
{
    data = new Object * [n];
    cur = 0;
    size = n;
}
//добавление объекта, на который указывает указатель p в вектор 
void Vector::Add()
{
    Object* p;
    //выбор из объектов двух возможных классов
    cout << "Введите тип данных (1 или 2)" << endl;
    cout << "1 - Человек" << endl;
    cout << "2 - Служащий" << endl;
    int y;
    cin >> y;
    if (y == 1)//добавление объекта класса Person 
    {
        Person* a = new (Person);
        a->Input();//ввод значений атрибутов 
        p = a;

        if (cur < size)
        {
            data[cur] = p;//добавление в вектор 
            cur++;
        }
        size = cur+1;
    }
    else
        if (y == 2) //добавление объекта класса Employee 
        {
            Employee* b = new Employee;
            b->Input();
            p = b;
            if (cur < size)
            {
                data[cur] = p;
                cur++;
            }
            size = cur+1;
        }
        else return;
}
//просмотр вектора 
void Vector::Show()
{
    if (cur == 0) cout << "База данных пуста" << endl;
    Object** p = data;//указатель на указатель типа Object 
    for (int i = 0; i < size-1; i++)
    {
        cout << "Запись №" << i + 1 << endl;
        (*p)->Show();//вызов метода Show() (позднее связывание) 
        p++;//передвигаем указатель на следующий объект 
    }
}
//операция, которая возвращает размер вектора 
int Vector::operator ()()
{
    return size-1;
}
//удаление элемента из вектора, память не освобождается! 
void Vector::Del()
{
    if (cur == 0)return;//пустой
    while(true)
    {
    cout << "Введите номер удаляемой записи: ";
    int index = 0;
    cin >> index;
    if (index < size)
    {
        cur = index-1;
        break;
    }
    }
    cout << "Запись №" << cur+1 << " удалена!" << endl;
    for (int i = cur; i < size; i++)
    {        
        data[cur] = data[cur+1];
        cur++;
    }
    data[cur] = 0;
    size = cur - 1;
}
void Vector::HandleEvent(const TEvent& e)
{
    if (e.what == evMessage)
    {
        Object** p = data;
        for (int i = 0; i < cur; i++)
        {
            (*p)->HandleEvent(e);//вызов метода  (позднее связывание) 
            p++;//передвигаем указатель на следующий объект 
        }
    }
}