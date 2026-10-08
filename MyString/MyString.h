#pragma once
#include <iostream>
using namespace std;

class MyString
{
    char* str;
    int length;

public:
    static int count;

    MyString();
    MyString(const char* s);
    ~MyString();

    void Input();
    void Print();
    int MyStrLen();

    char& operator[](int i);
    MyString operator+(char c);
    MyString operator^(char c);
    MyString& operator++();

    char* GetStr();
};
ostream& operator<<(ostream& out, MyString& a);