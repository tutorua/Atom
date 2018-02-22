#include <stdio.h>
#include <iostream>
#include <float.h>
//#include<conio.h>  // for obsolete compilers

using namespace std;

int main() {
    char c;
    short s;
    int i;
    long l;
    long long L;
    float f;
    double d;
    long double ld;

    cout << "Length of data types in C examples:" << '\n';

    // sizeof as a function
    printf("sizeof(char)  = %d\n", sizeof(c));
    printf("sizeof(short) = %d\n", sizeof(s));
    printf("sizeof(int)   = %d\n", sizeof(i));
    printf("sizeof(long)  = %d\n", sizeof(l));
    printf("sizeof(long long) = %d\n", sizeof(L));

    // sizeof as operator
    printf("sizeof(float)  = %d\n", sizeof f);
    printf("sizeof(double)   = %d\n", sizeof d);
    printf("sizeof(long double)  = %d\n", sizeof ld);

    //_getch();
    return 0;
}
