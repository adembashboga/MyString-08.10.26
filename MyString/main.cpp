#include "MyString.h"

int main()
{
    MyString a("Hello");

    cout << a << endl;

    a = a + '!';
    cout << a << endl;

    a = a ^ '>';
    cout << a << endl;

    ++a;
    cout << a << endl;

    cout << a.MyStrLen() << endl;

    return 0;
}