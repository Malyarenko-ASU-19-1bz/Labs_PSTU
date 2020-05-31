#include "Vector.h"
//���������� 
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
//����������� � ����������� 
Vector::Vector(int n)
{
    data = new Object * [n];
    cur = 0;
    size = n;
}
//���������� �������, �� ������� ��������� ��������� p � ������ 
void Vector::Add()
{
    Object* p;
    //����� �� �������� ���� ��������� �������
    cout << "������� ��� ������ (1 ��� 2)" << endl;
    cout << "1 - �������" << endl;
    cout << "2 - ��������" << endl;
    int y;
    cin >> y;
    if (y == 1)//���������� ������� ������ Person 
    {
        Person* a = new (Person);
        a->Input();//���� �������� ��������� 
        p = a;

        if (cur < size)
        {
            data[cur] = p;//���������� � ������ 
            cur++;
        }
        size = cur+1;
    }
    else
        if (y == 2) //���������� ������� ������ Employee 
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
//�������� ������� 
void Vector::Show()
{
    if (cur == 0) cout << "���� ������ �����" << endl;
    Object** p = data;//��������� �� ��������� ���� Object 
    for (int i = 0; i < size-1; i++)
    {
        cout << "������ �" << i + 1 << endl;
        (*p)->Show();//����� ������ Show() (������� ����������) 
        p++;//����������� ��������� �� ��������� ������ 
    }
}
//��������, ������� ���������� ������ ������� 
int Vector::operator ()()
{
    return size-1;
}
//�������� �������� �� �������, ������ �� �������������! 
void Vector::Del()
{
    if (cur == 0)return;//������
    while(true)
    {
    cout << "������� ����� ��������� ������: ";
    int index = 0;
    cin >> index;
    if (index < size)
    {
        cur = index-1;
        break;
    }
    }
    cout << "������ �" << cur+1 << " �������!" << endl;
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
            (*p)->HandleEvent(e);//����� ������  (������� ����������) 
            p++;//����������� ��������� �� ��������� ������ 
        }
    }
}