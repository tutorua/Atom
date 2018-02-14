/*
https://www.youtube.com/watch?v=27J0T96vtX8
C++ casts
Bradley Needham
*/

#include <iostream>

using namespace std;
// static_cast<type>(expression)
// reinterpret_cast<type>(expression)
// const_cast<type>(expression)
// dynamic_cast<type>(expression)
// obsolete c type:
// (type)expression or type(expression)

class Rational
{
    int m_num; int m_den;
public:
    Rational(int num, int den = 1) : m_num(num), m_den(den) {}
    double getDouble() { return static_cast<double>(m_num) / m_den; }
};

void print(const Rational& r)
{
    Rational& ncr = const_cast<Rational&>(r);
    cout << ncr.getDouble() << '\n';
}

int main()
{
    cout << "Casting in C examples:" << '\n';

    Rational r(3, 4);
    cout << r.getDouble() << endl;

    int a[3] = {42, 43, 44};
    unsigned char* ucp = reinterpret_cast<unsigned char*>(a);
    for (int i=0; i<3; i++)
    {
        printf("i = %d = %d \n", i, a[i]);
    }

    //getch();
    return 0;
}
