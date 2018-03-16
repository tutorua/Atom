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
	int r1 = rand();
	int r2 = rand();
	double r2_r1;
	cout << "Random integer 1 : "<< r1 << endl;
	cout << "Random integer 2 : "<< r2 << endl;

	// cast to real number
	r2_r1 = (double)r2 / (double)r1;
	cout << "Ratio of int2 to int1 : "<< r2_r1 << endl;


	return 0;
}
