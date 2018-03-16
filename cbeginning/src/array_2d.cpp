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
	cout << "My C++ endeavor: 2 dimentional array" << endl; // prints !!!Hello World!!!

    const int n = 4; // number of strings
    const int m = 2; // number of columns
    //int a[n][m] = {{11, 12}, {21, 22}, {31, 32}, {41, 42}};
	static int a[n][m]; // static gives 0 initialization
    a[1][0] = 1;

    for (int i=0; i<n; ++i) {
        cout << endl;
        for (int j=0; j<m; ++j) {
            cout << "   " << a[i][j];
        }
        cout << endl;
    }
	cout << "Finished " << endl;

	return 0;
}
