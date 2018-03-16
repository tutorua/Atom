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
	cout << "My C++ endeavor" << endl; // prints !!!Hello World!!!
    bool isHappy = true;
	int age;
	cout << "How old are you? "<< endl;
    cin >> age;

	if (age > 18 || isHappy) { // Wrong result will be published
        cout << "Your age is bigger than 18 " << endl;
    } else if (age == 18 && isHappy) {
        cout << "You are 18 and happy!" << endl;
    } else {
        cout << "Your age is under 18" << endl;
    }

	return 0;
}
