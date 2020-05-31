#include "Person.h"
class Employee :
	public Person
{
public:
	Employee(void);
public:
	~Employee(void);
	void Show();
	void Input();
	Employee(string, int, float, string);
	Employee(const Employee&);
	float Get_many() { return many; }
	string Get_titul() { return titul; }
	void Set_data(int, string);
	Employee& operator=(const Employee&);
protected:
	float many;
	string titul;
};