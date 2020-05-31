#include "Time.h" 
Time::Time(void)
{
	min = sec = 0;
}


Time::Time(int M, int S)
{
	min = M; sec = S;
}
Time::Time(const Time& t)
{
	min = t.min;
	sec = t.sec;
}
Time& Time::operator =(const Time& t)
{
	min = t.min;
	sec = t.sec;
	return*this;
}
ostream& operator<<(ostream& out, const Time& t)
{	
	out <<"Промежуток времени равен "<< t.min << " : " << t.sec<<endl;
	return out;
}
istream& operator>>(istream& in, Time& t)
{
	cout << "Введите минуты: "; in >> t.min;
	cout << "Введите секунды: "; in >> t.sec;
	return in;
}
Time Time::operator+(int k)
{
	int t = min * 60 + sec + k;
		Time tmp(t / 60, t % 60);
	return tmp;
} Time Time::operator+(Time s)
{
	int t1 = min * 60 + sec;
	int t2 = s.min * 60 + s.sec;
	Time temp((t1+t2) / 60, (t1 + t2) % 60);
	return temp;
}