#include "Sfera.h"
#include <math.h>

Sfera::Sfera(Punct3D c,double r)    {this->c.Punct3D::setP(c.getX(),c.getY(),c.getZ()); setR(r);}
Sfera::Sfera()                      {setR(1);} // constructor implicit folosind de asemenea constructorul implicit al clasei Punct3D

Punct3D Sfera::getC()               {return c;}
double Sfera::getR()                {return r;}

void Sfera::setR(double r)          {this->r = r;}

double Sfera::volum()               {return 4*3.14*r*r*r/3;}

double Sfera::distO()
{
    return sqrt( getC().getX()*getC().getX()  +  getC().getY()*getC().getY()  +  getC().getZ()*getC().getZ()  );
}
