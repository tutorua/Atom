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

struct isEven
{
    bool operator()(int x)
    {
        return !(x % 2);
    }
};

bool isEqual(int a, int b)
{
    return a==b;
}

int main()
{
    cout << "Functorss in C example:" << '\n';
    vector<int> col1 {1,2,3,4,5,6,7,8,9};

    cout << count_if(col1.begin(), col1.end(), isOdd()) << endl;
    cout << count_if(col1.begin(), col1.end(), isEven()) << endl;

    //getch();
    return 0;
}
