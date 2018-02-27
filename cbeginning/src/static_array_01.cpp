/*
the forth (third was reserved for the control structures)
console application to demonstrate some data properties
*/

#include <stdio.h>
#include <iostream>
#include <float.h>
#include <cstdlib>

using namespace std;

static int arrayLength = 3;
static double a[arrayLength];

int main()
{
    cout << "Static 1-d array in C example:" << '\n';

    for (int i = 0; i < arrayLength; ++i)
    {
        cout << ("Element at %d = %d", i, a[i]) << endl;
        a[i] = rand();
    }

    printf("Sizeof(double) = %d \n", sizeof(double));
    // Define the number of bytes required to keep the array values
    printf("Sizeof(a) = %d \n", sizeof(a));
    int arrayLength = sizeof(a) / sizeof(double);
    printf("Element count of array a = %d \n", arrayLength);

    // Print the array
    for (int i = 0; i < arrayLength; ++i)
    {
        //printf("Element at %d = %d \n", i, a[i]);
        cout << ("Element at %d = %d", i, a[i]) << endl;
    }

    // How to release the memory allocated for array a ?


    // getch();
    return 0;
}
