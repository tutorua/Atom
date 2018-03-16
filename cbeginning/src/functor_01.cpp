// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "algorithm"
#include "vector"
#include "string"

using namespace std;

struct isOdd
{
	bool operator()(int x)
	{
		return x % 2;
	}
};

bool isEven(int x)
{
	return !(x % 2);
}


struct isEqual
{
	bool operator()(int a, int b)
	{
		return a == b;
	}
};

int main()
{
	vector<int> col1{ 1,2,3,4,5,6,7,8,9 };
	
	isOdd fnOdd;
	isEqual fnEqual;
	// call as a functor
	cout << "Odd values : " << count_if(col1.begin(), col1.end(), isOdd()) << endl;
	// call as a function
	cout << "Even values : " << count_if(col1.begin(), col1.end(), isEven) << endl;
	// call as a functor
	cout << boolalpha << fnEqual(4, 5) << endl;
	return 0;
}

