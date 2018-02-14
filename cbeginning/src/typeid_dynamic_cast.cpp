/*
https://www.youtube.com/watch?v=QrDe8CK0x8U
C++ - typeid and dynamic_cast
Bradley Needham
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Shape
{
public:
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

class Rect : public Shape
{
public:
    virtual void draw() const { cout << "Rect" << endl; }
};

class Square : public Rect
{
public:
    virtual void draw() const { cout << "Square" << endl; }
};

class Elipse : public Shape
{
public:
    virtual void draw() const { cout << "Elipse" << endl; }
};

Shape* randomShape()
{
    switch (rand() % 2) {
        case 0:
            return new Rect();
        case 1:
            return new Square();
        case 2:
            return new Elipse();
    }
    return nullptr;
}

vector<Shape*> randomShapes(int num)
{
    vector<Shape*> v;
    for (int i = 0; i < num; ++i) {
        v.push_back(randomShape());
    }
    return v;
}

vector<Rect*> getRects(const vector<Shape*>& all)
{
    vector<Rect*> v;
    for (int i = 0; i < all.size(); ++i) {
        Rect* r = dynamic_cast<Rect*>(all[i]);
        if (r != nullptr) {
            v.push_back(r);
        }
    // the below code would test for only Rectanngles
    // To cath the inherited classes (Squares) we need
    // to apply a dynamic casting (implemented above)
    //    cout << typeid(*(all[i])).name() << endl;
    //    if (typeid(Rect) == typeid(*(all[i]))) {
    //        v.push_back(static_cast<Rect*>(all[i]));
    //    }
    }
    return v;
}

int main()
{
    cout << "typeid and dynamic_cast in C examples:" << '\n';

    vector<Shape*> all = randomShapes(12);

    vector<Rect*> rects = getRects(all);

    for (int i = 0; i < rects.size(); ++i) {
        rects[i]->draw();
    }

    for (int i = 0; i < all.size(); ++i) {
        delete all[i];
    }


    //getch();
    return 0;
}
