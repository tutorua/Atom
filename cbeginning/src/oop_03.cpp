//============================================================================
// Name        : Sandbox.cpp
// Author      : IG
// Version     :
// Copyright   : Your copyright notice
// Description : Inheritance (Incapsulation?) demo
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Car {

protected: // to be accessible from Motorcycle
    double speed;
    int weight;

public:
    Car () {} // constructor by default

    Car (int weight, double speed) {
        this->weight = weight;
        this->speed  = speed;
        print();
    }

    void setValues(int weight, double speed) {
        this->weight = weight;
        this->speed  = speed;
    }

    void print() {
        cout << this->weight << "-" << this->speed << endl;
    }

    // destructor works after the work with class is finished
    ~Car () {
        cout << "All done" << endl;
    }
};

class Motorsycle : public Car {
public:
    void print() {
        cout << weight << "-" << speed << endl;
    }
};


int main() {

    // here we use the constructor with the ...
    Car skoda(1100, 234.5);

    // here we use Constructor by default
    Car audi;
    audi.setValues(2000, 325.5);
    audi.print();

    Motorsycle bmw;
    bmw.setValues(500, 201.5);
    bmw.print();

    return 0;
}
