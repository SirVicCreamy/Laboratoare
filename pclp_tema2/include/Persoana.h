#ifndef PERSOANA_H
#define PERSOANA_H

#include <iostream>
#include <vector>
#include <algorithm>
using std::string;
using std::vector;
using std::ostream;
using std::cout;


class Persoana
{
public:
    Persoana(string,string);
    string getNume();
    string getAfiliere();
    void setNume(string);

protected:
    string nume;
    string afiliere;
};

#endif // PERSOANA_H
