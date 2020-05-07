#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include "Time.h"
#include "DateTime.h"

using std::cout;


int main()
{

   Time t(13,42,50);
   DateTime d(21,11,2020,15,32,16);
   cout<<t;
   cout<<"\n\n";
   cout<<d;
   cout<<"\n";



    /*Cylinder cyl(5.7, 2.5, 12, 23);
    cout << "Coordonata X este " << cyl.getX()
         << "\nCoordonata Y este " << cyl.getY()
         << "\nRaza este " << cyl.getRadius()
         << "\nInaltimea este " << cyl.getHeight() << "\n\n";

    cyl.setHeight(10);
    cyl.setRadius(4.25);
    cyl.setPoint(2, 2);
    cout << "Noua pozitie, raza si inaltimea lui cyl sunt:\n"
         << cyl << '\n';

    cout << "Aria lui cyl este: " << cyl.area() << '\n';

    Point& pRef = cyl;
    cout << "\nCilindrul tiparit ca un Point este: "
         << pRef << "\n\n";

    Circle& circleRef = cyl;
    cout << "Cilindrul tiparit ca un Circle este:\n"
         << circleRef
         << "\nAria: " << circleRef.area() << endl;
*/
    return 0;
}
