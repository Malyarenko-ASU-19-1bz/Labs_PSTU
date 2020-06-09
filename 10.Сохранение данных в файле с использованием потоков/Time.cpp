#include "Time.h" 
Time::Time()
{
	min = 0; sec = 0;
}
Time::Time(int N, int A)
{
	min = N; sec = A;
}
Time::Time(const Time& p)
{
	min = p.min; sec = p.sec;
}
Time Time::operator =(const Time& p)
{
	if (&p == this) return *this;
	min = p.min; sec = p.sec;
	return*this;
}
Time::~Time()
{
}

ostream& operator<<(ostream& out, const Time& p)
{
	out << p.min <<  " : " << p.sec << "\n";
	return out;
}

istream& operator>>(istream& in, Time& p)
{
	cout << "¬ведите минуты: "; in >> p.min;
	cout << "¬ведите секунды: "; in >> p.sec;
	return in;
}
fstream& operator>>(fstream& fin, Time& p)
{
	fin >> p.min;
	fin >> p.sec;
	return fin;
}
fstream& operator<<(fstream& fout, const Time& p)
{
	fout << p.min << "\n" << p.sec << "\n";
	return fout;
}
bool Time::operator !=(const Time& p)
{
	int t1, t2;
	bool buf;
	t1 = min * 60 + sec;
	t2 = p.min * 60 + p.sec;
	if (t1 != t2)
	{
		cout << "»нтервалы не равны!\n";
		buf = true;
	}
	else
	{
		cout << "»нтервалы равны!\n";
		buf = false;
	}
	return buf;
}
Time Time::operator-(const Time& p)
{	
	int t1, t2, t;
	t1 = min * 60 + sec;
	t2 = p.min * 60 + p.sec;
	t = abs(t2 - t1);
	Time tmp(t / 60, t % 60);
	return tmp;
}
Time Time::operator-(int s)
{
	int t, t1 = min * 60 + sec;
	t = t1 - s;
	if (t < 0)t = 0;
	Time tmp(t / 60, t % 60);
	return tmp;
}