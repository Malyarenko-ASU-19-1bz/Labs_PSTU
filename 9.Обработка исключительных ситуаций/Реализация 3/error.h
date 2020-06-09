#pragma once
#include <iostream>
using namespace std;

class Error//базовый класс 
{
public:
    virtual void what() {};
};
class IndexError :public Error //ошибка в индексе вектора 
{
public:
    string msg;
public:
    IndexError() { msg = "ќшибка индекса!\n"; }
    virtual void what() { cout << msg; }
};
class SizeError :public Error //ошибка в размере вектора 
{
public:
    string msg;
public:
    SizeError() { msg = "ѕревышен текущий размер!\n";  }
    virtual void what() { cout << msg; }
};
class MaxSizeError :public SizeError //превышение максимального размера 
{
public:
    string msg_;
public:
    MaxSizeError() { SizeError(); msg_ = "ѕревышен максимальный размер!\n"; }
    virtual void what() { cout << msg << msg_; }
};
class EmptySizeError :public SizeError //удаление из пустого вектора 
{
public:
    string msg_;
public:
    EmptySizeError() { SizeError(); msg_ = "¬ектор пустой!\n";
    }
    virtual void what() { cout << msg << msg_; }
};
class IndexError1 :public IndexError //индекс меньше нул€ 
{
public:
    string msg_;
public:
    IndexError1() { IndexError(); msg = "»ндекс меньше нул€!\n"; }
    virtual void what() { cout << msg << msg_; }
};
class IndexError2 :public IndexError //индекс больше текущего размера вектора 
{
public:
    string msg_;
public:
    IndexError2() { IndexError(); msg_ = "»ндекс больше размера!\n";  }
    virtual void what() { cout << msg << msg_; }
};