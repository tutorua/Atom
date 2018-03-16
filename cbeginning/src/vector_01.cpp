//============================================================================
// Name        : Sandbox.cpp
// Author      : IG
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string title = "My C++ endeavor: vector demo";
    cout << title << endl; // prints !!!Hello World!!!

    vector <int> vect (10);
    int a[3] = {23, 34, 56};

    vect.insert(vect.begin(), a, a+2);
    cout << vect.front() << endl;
    cout << vect.at(1) << endl;
    vect.push_back(45);
    cout << vect.back() << endl;


	cout << "Finished " << endl;
	return 0;
}
