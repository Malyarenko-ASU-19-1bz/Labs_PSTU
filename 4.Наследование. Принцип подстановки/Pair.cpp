#include "Pair.h"

//����������� ��� ����������
Pair::Pair(void)
{
first=0;
second=0;
}

//����������
Pair::~Pair(void){}

//����������� � �����������
Pair::Pair(int F,int S)
{
first=F;
second=S;
}

//����������� �����������
Pair::Pair(const Pair& Pair)
{
first = Pair.first;
second = Pair.second;
}

//������������
void Pair::Set_fir(int F)
{
first=F;
}

void Pair::Set_sec(int S)
{
second=S;
}

int Pair::get_aria()//������������
{
	return first * second;
}


//���������� �������� ������������
Pair& Pair::operator=(const Pair&p)
{
if(&p==this)return *this;
first=p.first;
second=p.second;
return *this;
}

//���������� ������� ��� �����
istream& operator>>(istream&in, Pair&p)
{
cout<<"\n������� ����� ������ ������� ��������������: ";
in>>p.first;
cout<<"������� ����� ������ ������� ��������������: ";
in>>p.second;
cout << endl;
return in;
}

//���������� ������� ��� ������
ostream& operator<<(ostream&out,const Pair&p)
{
out<<"\n������ ������� ��������������: "<<p.first;
out << "\n������ ������� ��������������: " << p.second << endl;
return out;
}