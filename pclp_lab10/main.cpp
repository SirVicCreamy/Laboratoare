//#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
using std::cout;

int main()
{
    Circle* CirclePtr=new Circle(3 , 0,  0);
    Cylinder* CylinderPtr=new Cylinder(5 , 2 , 1 , 1);
    cout<<"Arie cerc: "<<CirclePtr->area();
    cout<<"\n";
    cout<<"Arie cilindru: "<<CylinderPtr->area();
    cout<<"\n";



    return 0;

    /*
    cout << "Functii apelate prin pointer la Shape:" << endl;
    Shape* shapePtr = new Shape();
    shapePtr->printShapeName();
    shapePtr->init();

    cout << "\nFunctii apelate prin pointer la Shape "
         << "initializat prin pointer la Point:" << endl;
    Point* pointPtr = new Point();
    shapePtr = pointPtr;
    cout << "Comportament polimorfic: ";
    shapePtr->printShapeName();
    shapePtr->init();

    cout << "\nFunctii apelate prin obiect de tip Shape:"
         << endl;
    Shape shape;
    shape.printShapeName();
    shape.init();

    cout << "\nFunctii apelate prin obiect de tip Point:"
         << endl;
    Point point;
    point.printShapeName();
    point.init();
    cout << "\nFunctie non-virtuala apelata prin pointer la "
         << "Shape:" << endl;
    shapePtr = &point;
    cout << "Comportament non-polimorfic: ";
    shapePtr->init();*/


}
