#pragma once
#include <iostream>
using namespace std;

class Error//������� ����� 
{
public:
    virtual void what() {};
};
class IndexError :public Error //������ � ������� ������� 
{
public:
    string msg;
public:
    IndexError() { msg = "������ �������!\n"; }
    virtual void what() { cout << msg; }
};
class SizeError :public Error //������ � ������� ������� 
{
public:
    string msg;
public:
    SizeError() { msg = "�������� ������� ������!\n";  }
    virtual void what() { cout << msg; }
};
class MaxSizeError :public SizeError //���������� ������������� ������� 
{
public:
    string msg_;
public:
    MaxSizeError() { SizeError(); msg_ = "�������� ������������ ������!\n"; }
    virtual void what() { cout << msg << msg_; }
};
class EmptySizeError :public SizeError //�������� �� ������� ������� 
{
public:
    string msg_;
public:
    EmptySizeError() { SizeError(); msg_ = "������ ������!\n";
    }
    virtual void what() { cout << msg << msg_; }
};
class IndexError1 :public IndexError //������ ������ ���� 
{
public:
    string msg_;
public:
    IndexError1() { IndexError(); msg = "������ ������ ����!\n"; }
    virtual void what() { cout << msg << msg_; }
};
class IndexError2 :public IndexError //������ ������ �������� ������� ������� 
{
public:
    string msg_;
public:
    IndexError2() { IndexError(); msg_ = "������ ������ �������!\n";  }
    virtual void what() { cout << msg << msg_; }
};