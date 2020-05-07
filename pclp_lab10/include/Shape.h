#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void printShapeName() const
    {
        cout << "Shape::printShapeName()" << endl;
    }
    void init() const
    {
        cout << "Shape::init()" << endl;
    }
};
class Point : public Shape
{
public:
    void printShapeName() const override
    {
        cout << "Point::printShapeName()" << endl;
    }
    void init() const
    {
        cout << "Point::init()" << endl;
    }
};

#endif // SHAPE_H
