//============================================================================
// Name        : Sandbox.cpp
// Author      : IG
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "My C++ endeavor: CASE statement" << endl; // prints !!!Hello World!!!

    const int n = 4;
    //int a[n];
    static int a[n];
    a[0] = 1;
	cout << "First element is:  " << a[0] <<endl;

    for (int i=0; i<n; ++i) {
        cout << "   " << a[i];
    }

	return 0;
}
