#include "Punct.h"

Punct::Punct(){setX(0);setY(0);}

Punct::Punct(double x, double y){setX(x);setY(y);}

double Punct::getX(){return x;}
double Punct::getY(){return y;}

void Punct::setX(double val){x=val;}
void Punct::setY(double val){y=val;}
