#include "Persoana.h"

Persoana::Persoana(string num, string afl)
{
    nume=num;
    afiliere=afl;
}

string Persoana::getNume()
{
    return nume;
}

string Persoana::getAfiliere()
{
    return afiliere;
}

void Persoana::setNume(string num)
{
    nume=num;
}
