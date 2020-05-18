#include "Profesor.h"

Profesor::Profesor(string num, string dep):Persoana (num,dep)
{
}

bool Profesor::adaugaCurs(string curs)
{
    if(listaCursuri.size() <NR_MAX_CURSURI)
    {
        vector<string>::const_iterator gasit;
        gasit=std::find(listaCursuri.begin(),listaCursuri.end(),curs);
        if (gasit == listaCursuri.end())
        {
            listaCursuri.push_back(curs);
            return true;
        }
    }
    return false;
}

bool Profesor::stergeCurs(string curs)
{
    vector<string>::const_iterator gasit;
    gasit=std::find(listaCursuri.begin(),listaCursuri.end(),curs);
    if (gasit != listaCursuri.end())
    {
        listaCursuri.erase(gasit);
        return true;
    }
    return false;
}

ostream& operator<<(ostream& out, const Profesor& p)
{
    out<<"Profesor: "<<p.nume<<" ("<<p.afiliere<<")";
    return out;
}
