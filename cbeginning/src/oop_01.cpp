//============================================================================
// Name        : Sandbox.cpp
// Author      : IG
// Version     :
// Copyright   : Your copyright notice
// Description : simple oop example - define Class
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int weight;

protected:
    double speed;
    int height;

public:
    void setValues(int height, double speed) {
        this->height = height;
        this->speed  = speed;
    }

    void print() {
        cout << this->height << "-" << this->speed << endl;
    }
};


int main() {

    // here we use Constructor by default See oop_02.cpp for further
    Car shkoda;
    shkoda.setValues(1100, 234.5);
    shkoda.print();

    Car audi;
    audi.setValues(2000, 325.5);
    audi.print();

    return 0;
}
