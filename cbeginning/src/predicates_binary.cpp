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

// Predicate is a callable object which returns a boolean (Function)
bool isOdd(int x)
{
    return x % 2;
}

bool isEqual(int a, int b)
{
    return a==b;
}

int main()
{
    cout << "Predicates in C example:" << '\n';
    cout << boolalpha << isOdd(4) << endl;
    cout << boolalpha << isEqual(5,5) << endl;

    //getch();
    return 0;
}
