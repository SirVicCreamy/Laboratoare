#include <iostream>
using std::cout;
#include "DateTime.h"
#include "Time.h"

DateTime::DateTime(int d, int mo, int y, int h, int m, int s )
{

    year= (y>=1990 && y<=9999)? y : 1990;

    month= (mo>=1 && mo<=12)? mo : 1;

    if(month%2==1)  day= (d>=1 && d<=31) ? d : 1;
    if(month==2)
        if(year%4==0)   day= (d>=1 && d<=29) ? d : 1;               //restrictii pentru zi in functie de luna
        else            day= (d>=1 && d<=28) ? d : 1;
    if(month%2==0 && month!=2)  day= (d>=1 && d<=30) ? d : 1;

    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;

}

void DateTime::print()
{   cout<<"--DateTime print-- \n";
    cout<<day<<"-"<<month<<"-"<<year<<"\n";
    Time::print();

}



