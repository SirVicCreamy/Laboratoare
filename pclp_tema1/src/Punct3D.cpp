#include "Punct3D.h"

Punct3D::Punct3D(double x, double y, double z)   {setP(x,y,z);} // constructor explicit
Punct3D::Punct3D()                               {setP(0,0,0);} // constructor implicit

double Punct3D::getX()                           {return x;}
double Punct3D::getY()                           {return y;}
double Punct3D::getZ()                           {return z;}

void Punct3D::setX(double x)                     {this->x = x;}
void Punct3D::setY(double y)                     {this->y = y;}
void Punct3D::setZ(double z)                     {this->z = z;}

void Punct3D::setP(double x,double y, double z)  {setX(x);  setY(y);  setZ(z);}


