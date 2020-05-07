#include "Dreapta.h"
#include <iostream>

Dreapta::Dreapta(double x1, double y1, double x2, double y2)
{
 p1.setX(x1);  p1.setY(y1);
 p2.setX(x2);  p2.setY(y2);
}

void Dreapta::setP1(Punct p)
{
p1.setX(p.getX());
p1.setY(p.getY());
}

void Dreapta::setP2(Punct p)
{
p2.setX(p.getX());
p2.setY(p.getY());
}

Punct Dreapta::getP1(){return p1;}

Punct Dreapta::getP2(){return p2;}


void Dreapta::afisare()
{
 std::cout<<"\nDreapta determinata de punctele: ("<<getP1().getX()<<" , "<<getP1().getY()<<") ; ("<<getP2().getX()<<" , "<<getP2().getY()<<")\n";
}
