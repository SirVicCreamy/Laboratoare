#include "DateTime.h"
#include "Time.h"


DateTime::DateTime(int d, int mo, int y, int h, int m, int s ) : Time(h,m,s)
{

    year= (y>=1990 && y<=9999)? y : 1990;

    month= (mo>=1 && mo<=12)? mo : 1;

    if(month%2==1)
        day= (d>=1 && d<=31) ? d : 1;
    if(month==2)
        if(year%4==0)
            day= (d>=1 && d<=29) ? d : 1;               //restrictii pentru zi in functie de luna
        else
            day= (d>=1 && d<=28) ? d : 1;
    if(month%2==0 && month!=2)
        day= (d>=1 && d<=30) ? d : 1;



}



ostream& operator<<(ostream& out, const DateTime& d)
{

    out<<d.day<<"-"<<d.month<<"-"<<d.year<<"\n";
    const Time& tRef = d;
    out<<tRef<<"\n";
    return out;

}



