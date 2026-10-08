#include "MyString.h"
#include <cstring>

int MyString::count = 0;

MyString::MyString()
{
    str = new char[100];
    str[0] = '\0';
    length = 0;
    count++;
}

MyString::MyString(const char* s)
{
    length = strlen(s);
    str = new char[length + 1];
    strcpy_s(str, length + 1, s);
    count++;
}

MyString::~MyString()
{
    delete[] str;
    count--;
}

void MyString::Input()
{
    cin.getline(str, 100);
    length = strlen(str);
}

void MyString::Print()
{
    cout << str << endl;
}

int MyString::MyStrLen()
{
    return length;
}

char& MyString::operator[](int i)
{
    return str[i];
}

MyString MyString::operator+(char c)
{
    MyString temp(str);
    temp.str[temp.length] = c;
    temp.length++;
    temp.str[temp.length] = '\0';
    return temp;
}

MyString MyString::operator^(char c)
{
    MyString temp;
    temp.str[0] = c;
    strcpy_s(temp.str + 1, 99, str);
    temp.length++;
    return temp;
}

MyString& MyString::operator++()
{
    *this = *this + ' ';
    return *this;
}

char* MyString::GetStr()
{
    return str;
}

ostream& operator<<(ostream& out, MyString& a)
{
    out << a.GetStr();
    return out;
}