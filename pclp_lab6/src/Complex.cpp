#include "complex.h"
Complex:: Complex(double r, double i)
{
 real = r;
 imaginar = i;
}
void Complex::setReal(double r)
{
 real = r;
}
double Complex::getReal()
{
 return real;
}
void Complex::setImaginar(double i)
{
 imaginar = i;
}
double Complex::getImaginar()
{
 return imaginar;
}


Complex Complex::operator+(Complex c)
{
 Complex nc;
 nc.setReal(real+c.real);
 nc.setImaginar(imaginar+c.imaginar);
 return nc;

}
//---------------------------------------------------------
const Complex operator*(const Complex& c1,const Complex& c2)
{
 Complex nc;
 // (a+bi) * (c+di) = ac-bd + (ad+bc)i
 nc.setReal     (c1.real*c2.real     -  c1.imaginar*c2.imaginar);
 nc.setImaginar (c1.real*c2.imaginar +  c2.real*c1.imaginar);
 return nc;
}

Complex Complex::operator!()
{
setImaginar(-imaginar);
return *this;
}

   ostream& operator<<(ostream& out ,const Complex& c)
   {

   if(!c.real && !c.imaginar) out<<c.real<<"\n";
   else{
       if(c.real)
           out<<c.real<<" ";
       if(c.imaginar>0)
               if(c.imaginar!=1)
                   {if(c.real)out<<"+";
                   out<<c.imaginar<<"i\n";}
               else
                   {if(c.real)out<<"+";
                   out<<"i\n";}

       if(c.imaginar<0)
               if(c.imaginar!=-1)out<<c.imaginar<<"i\n";
              else out<<"-i\n";

       if(c.imaginar==0) out<<"\n";
       }
   // da , probabil nu era nevoie de atatea afisari :)
   return out;
   }
//---------------------------------------------------------


Complex Complex::operator++() //prefixare
{

  setReal(real+1);
  return *this;

}

Complex Complex::operator++(int) //postfixare
{

  setReal(real+1);
  return *this;

}


/*
istream& operator>>(istream& in ,const Complex& c)
{  double r,i;
   in>>r;
   in>>i;
   c.setReal(r);
   c.setImaginar(i);

   return in;
}




*/


