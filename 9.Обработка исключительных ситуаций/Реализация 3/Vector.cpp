#include "Vector.h" 

Vector::Vector(int s)
{

    if (s > MAX_SIZE) throw MaxSizeError();
    size = s;
    size_first = s;
    beg = new int[s];
    for (int i = 0; i < size; i++)
        beg[i] = rand()%15;
}
Vector::Vector(const Vector& v)
{
    size = v.size;
    size_first = v.size_first;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
}
Vector::~Vector()
{
    if (beg != 0) delete[]beg;
}
Vector::Vector(int s, int* mas)
{
    if (s > MAX_SIZE) throw MaxSizeError();
    size = s;
    size_first = s;
    beg = new int[size];
    for (int i = 0; i < size; i++) beg[i] = mas[i];
}
const Vector& Vector::operator =(const Vector& v)
{
    if (this == &v)return *this;
    if (beg != 0) delete[]beg;
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
    return*this;
}

ostream& operator<<(ostream& out, const Vector& v)
{
    if (v.size == 0) throw EmptySizeError();
    else
    {
        for (int i = 0; i < v.size; i++) out << v.beg[i] << " ";
        out << endl;
    }
    return out;
}
istream& operator >>(istream& in, Vector& v)
{
    for (int i = 0; i < v.size; i++)
    {
        cout << "Введите целое число: ";
        in >> v.beg[i];
    }
    return in;
}
int Vector::operator [](int i)
{
    return beg[i-1];
}

void Vector::Add()
{
    int a = 0;
    cout << "Введите количество элементов для добавления: ";
    cin >> a;
    if (size + a > size_first || a <= 0) throw SizeError();
    for (int x = size; x < size + a; x++)
    {        
        beg[x] = rand() % 15;
    }
    size = size + a;
}
void Vector::Del()
{
    int c = 0;
    
        cout << "Введите количество удаляемых элементов: ";
        cin >> c;
        if (size - c < 0) throw SizeError();
            
    for (int x = size - c; x < size; x++)
    {
         beg[x] = 0;         
    }
    size = size - c;
}
int Vector::operator () ()
{
    return size;
}