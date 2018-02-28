/*
http://www.cppreference.com/
https://cboard.cprogramming.com/c-programming/154145-random-number-interval-[0-1].html

*/

#include <stdio.h>
#include <iostream>
#include <float.h>
#include <cstdlib>
#include <sys/time.h>

using namespace std;

double rand_0_1(void)
{
    return rand() / ((double) RAND_MAX);
}

int randomRange(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

void doSeed(void) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    unsigned seed = (unsigned)tp.tv_usec;
    srand(seed);
}

int main()
{
    // C++ generates random integer  in the range 0 ... RAND_MAX
    cout << "Max random value in C example: " << RAND_MAX << '\n';
    cout << "Generated random value: " << rand() << '\n';

    // initialize random seed
    srand (time(NULL)); // it tends to give a poor seed
    doSeed();

    // For an integer range one might use the formula:
    cout << "Random integer in the range 1985-2014 : " << randomRange(1985, 2014) << endl;

    // Chech the distribution (seems not uniform, rather normal)
    for (int i=0; i<10; ++i) {
        cout << "Normalized random value: " << rand_0_1() << '\n';
    }

}
