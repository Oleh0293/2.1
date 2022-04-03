#include <iostream>
#include "Floatrange.h"
int main()
{
    Floatrange a(20, 1);
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;
    Floatrange x;
    cout << "Input complex number ->" << endl;
    cin >> x;
    x.RangeCheck();
}