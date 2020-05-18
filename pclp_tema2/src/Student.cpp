#include "Student.h"

Student::Student(string num, string spec) : Persoana(num,spec)
{
}

bool Student::adaugaNotaCurs(string curs, int nota)
{
    if(listaCursuri.size() <NR_MAX_CURSURI)
    {
       if(1<=nota && nota<=10)
        {
            listaCursuri.push_back(curs);
            note.push_back(nota);
            return true;
        }

    }
    return false;
}

void Student::tiparesteNote()
{
    cout<<"Student: "<<nume<<"("<<afiliere<<")  ";
    for( int i=0; i<listaCursuri.size(); i++)
        cout<<listaCursuri[i]<<" :"<<note[i]<<"  ";
    cout<<"\n";
}

double Student::mediaNotelor()
{
    double med=0.00;
    for( int i=0; i<note.size(); i++)
        med+=note[i];
    med/=note.size();
    return med;
}

ostream& operator<<(ostream& out, const Student& s)
{
    out<<"Student: "<<s.nume<<" ("<<s.afiliere<<")";
    return out;
}
