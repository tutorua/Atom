//============================================================================
// Name        : Sandbox.cpp
// Author      : IG
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;


void print(string s) {
    cout << s << endl;
}

// reloading of the function
void print(string s, int i) {
    cout << s << " " << i << endl;
}

void print(string s, double d) {
    cout << s << " " << d << endl;
}

int main() {
    string topic = "My C++ endeavor";
    print(topic);
	int r1 = rand();
	int r2 = rand();
	double r2_r1;
	print("Random integer 1 :", r1);
	print("Random integer 2 :", r2);

	// cast to real number
	r2_r1 = (double)r2 / (double)r1;
	print("Ratio of int2 to int1 :", r2_r1);


	return 0;
}
