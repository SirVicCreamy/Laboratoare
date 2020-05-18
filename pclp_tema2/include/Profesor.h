#ifndef PROFESOR_H
#define PROFESOR_H
#include "Persoana.h"



class Profesor : public Persoana
{
public:
    Profesor(string,string);
    bool adaugaCurs(string);
    bool stergeCurs(string);
    friend ostream& operator<<(ostream&, const Profesor&);
private:
    vector<string> listaCursuri;
    const int NR_MAX_CURSURI=5;
};

#endif // PROFESOR_H
