#include "object.h" 
#include <string> 
#include <iostream> 
using namespace std;
class Vector
{
public:
    Vector(void);//����������� ��� ����������
 public:
    ~Vector(void);//����������
    void Add(Object*);//���������� �������� � ������
    friend ostream& operator<<(ostream& out, const Vector&);//�������� ������
private:
    Object** beg;//��������� �� ������ ������� �������
};