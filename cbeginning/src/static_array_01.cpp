/*
This example makes all I knew regarding C++ and arrays in a garbage
I could;
- reassign a constant,
- step out of the boundary of the arrays
- rand returns strange value ~e+09
Solutions:
array is always a pointer regardles of *

*/

#include <stdio.h>
#include <iostream>
#include <float.h>
#include <cstdlib>

using namespace std;

int main()
{
    const int iArrayLength {3}; // modern way of assignment
    static double a[iArrayLength]; // the elements are zero for static

    cout << "Static 1-d array in C example: " << '\n';

    cout << "Max random value in C example: " << RAND_MAX << '\n';
    double r = rand();
    cout << "Generated random value: " << r << '\n';

    for (int i = 0; i < iArrayLength; ++i)
    {
        cout << ("Element at %f = %f", i, a[i]) << endl;
        a[i] = rand() / (double) RAND_MAX;
        cout << ("Assigned random %f = %f", i, a[i]) << endl;

    }
    a[3] = 1; // should generate a warning but does not
    printf("Sizeof(double) = %d \n", sizeof(double));
    // Define the number of bytes required to keep the array values
    printf("Sizeof(a) = %d \n", sizeof(a));

    // Print the array
    for (int i = 0; i <= iArrayLength; ++i)
    {
        //printf("Element at %d = %d \n", i, a[i]);
        cout << ("Element at %d = %d", i, a[i]) << endl;
    }

    // How to release the memory allocated for array a ?


    // getch();
    return 0;
}
