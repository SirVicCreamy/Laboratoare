#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

using std::ostream;
using std::istream;

class Complex
{
public:
    Complex(double=0, double=0);
    void setReal(double);
    double getReal();
    void setImaginar(double);
    double getImaginar();

    Complex operator+(Complex);

    Complex operator++();  //prefixare
    Complex operator++(int);    //postfixare


    friend const Complex operator*(const Complex&,const Complex&);
    Complex operator!();
    friend ostream& operator<<(ostream&  ,const Complex& );
    friend istream& operator>>(istream&  ,const Complex& );

private:
    double real;
    double imaginar;
};
#endif
