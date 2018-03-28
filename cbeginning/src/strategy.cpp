/*
https://www.youtube.com/watch?v=ANXPjR5lKTE
C++ - Idioms and Patterns (strategy)
Bradley Needham
*/


#include <iostream>
#include "..\include\Robot.h" // does not see the file inside \src\headers

using namespace std;

void go(Robot& r)
{
    r.search();
    r.attack();
    r.defend();
}

int main()
{
    std::cout << "Idioms and Patterns (strategy) in C examples:" << '\n';
    LinearPinchRun r1;
    SpiralPinchRun r2;

    go(r1);
    std::cout << '\n';
    go(r2);
    std::cout << '\n';


    //getch();
    return 0;
}
