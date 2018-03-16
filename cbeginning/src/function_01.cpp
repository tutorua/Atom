#include "stdafx.h"
#include "iostream"
#include "algorithm"
#include "vector"
#include "string"

using namespace std;

bool isOdd(int x)
{
	return x % 2;
}

bool isEqual(int a, int b)
{
	return a == b;
}

int main()
{
	cout << boolalpha << isOdd(4) << endl;
	cout << boolalpha << isEqual(4, 5) << endl;
	return 0;
}
