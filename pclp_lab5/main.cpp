#include <iostream>
using std::cout;
using std::endl;
#include "Employee.h"
#include "Dreapta.h"
int main()
{
Punct A(2.4, 1.2),B(5.2, 9.9);
Dreapta d(3.3, 5.5 ,9.5 , 4.1);
d.afisare();
d.setP1(A);
d.setP2(B);
d.afisare();

 return 0;
}

