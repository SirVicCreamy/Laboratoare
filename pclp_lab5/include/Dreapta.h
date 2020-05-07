#ifndef DREAPTA_H_INCLUDED
#define DREAPTA_H_INCLUDED

#include "Punct.h"

class Dreapta
{ private :
        Punct p1;
        Punct p2;
  public:
        Dreapta(double, double, double, double );
        Punct getP1();
        Punct getP2();
        void setP1(Punct);
        void setP2(Punct);
        void afisare();



};


#endif // DREAPTA_H_INCLUDED
