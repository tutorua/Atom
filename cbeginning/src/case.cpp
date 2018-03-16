//============================================================================
// Name        : Sandbox.cpp
// Author      : IG
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "My C++ endeavor: CASE statement" << endl; // prints !!!Hello World!!!

	int num;
	cout << "Enter a digit:  "<< endl;
    cin >> num;

    switch (num) {
        case 1 :
            cout << "You entered 1 " << endl;
            break;
        case 2 :
            cout << "You entered 2 " << endl;
            break;
        case 7 :
            cout << "You entered 7 " << endl;
            break;
        default :
            cout << "You entered Unknown number! " << endl;

    }

	return 0;
}
