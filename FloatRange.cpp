#include "Floatrange.h"
#include <sstream>

Floatrange::Floatrange()
{
    first = 0;
    second = 0;
}
Floatrange::Floatrange(double r, double i = 0)
{
    first = r;
    second = i;
}
Floatrange::Floatrange(const Floatrange& f)
{
    second = f.second;
    first = f.first;
}
void Floatrange::SetR(double x)
{
    second = x;
}

void Floatrange::SetL(double x)
{
    first = x;
}

double Floatrange::GetR() const
{
    return second;
}

double Floatrange::GetL() const
{
    return first;
}

ostream& operator << (ostream& out, const Floatrange& f)
{
    out << string(f);
    return out;
}
istream& operator >> (istream& in, Floatrange& f)
{
    cout << " First = "; in >> f.first;
    cout << " Second = "; in >> f.second;
    cout << endl;
    return in;
}

Floatrange::operator string () const
{
    stringstream ss;
    ss << " Firsst = " << first << endl;
    ss << " Second = " << second << endl;
    return ss.str();
}

Floatrange& Floatrange::operator ++()
{
    second++;
    return *this;
}
Floatrange& Floatrange::operator --()
{
    second--;
    return *this;
}
Floatrange Floatrange::operator ++(int)
{
    Floatrange t(*this);
    first++;
    return t;
}
Floatrange Floatrange::operator --(int)
{
    Floatrange t(*this);
    first--;
    return t;
}
void Floatrange::RangeCheck() const
{
    int n;
    cout << "Number=";
    cin >> n;
    if (n >= first && n <= second)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "Nope" << endl;
    }
}