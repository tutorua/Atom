/*
the first console application to try Atom capabilities to run C code
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello C from Atom" << '\n';
    // Atom used to execute the programs in a separate console window.
    // It will not close it automatically upon a program completion.
    // For other compilers to observe the result you might need to use:
    // getch();
    return 0;
}
