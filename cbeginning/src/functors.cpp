/*
https://www.youtube.com/watch?v=fD0Sykh3vPs
C++ - predicates and functors
Bradley Needham
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Functor overload a Function
struct isOdd
{
    bool operator()(int x)
    {
        return x % 2;
    }
};

bool isEqual(int a, int b)
{
    return a==b;
}

int main()
{
    cout << "Functorss in C example:" << '\n';
    isOdd fn;
    cout << boolalpha << fn(4) << endl;
    cout << boolalpha << isEqual(5,5) << endl;

    //getch();
    return 0;
}
