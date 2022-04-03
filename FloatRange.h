#pragma once
#include <iostream>
#include <string>
#include <istream>

using namespace std;

class Floatrange
{
private:
    double second, first;
public:
    Floatrange();
    Floatrange(double, double);
    Floatrange(const Floatrange&);

    void RangeCheck() const;

    void SetR(double);
    void SetL(double);

    double GetR() const;
    double GetL() const;

    operator string() const;

    friend ostream& operator << (ostream&, const Floatrange&);
    friend istream& operator >> (istream&, Floatrange&);


    Floatrange& operator ++();
    Floatrange& operator --();
    Floatrange operator ++(int);
    Floatrange operator --(int);

};
