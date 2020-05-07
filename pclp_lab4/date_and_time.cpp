#include <iostream>
using std::cout;
#include "date_and_time.h"

DateAndTime::DateAndTime(int d, int mo, int y, int h, int m, int s )
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

void DateAndTime::print()
{
    cout<<day<<"-"<<month<<"-"<<year;
    cout <<"    [" <<(hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << ":" << (second < 10 ? "0" : "") << second << "]\n";
}


void DateAndTime::tick(int i)
{
    second+=i;
    if(second>=60)  {minute+=second/60; second%=60;}
    if(minute>=60)  {hour+=minute/60;   minute%=60;}
    if(hour>=24)    {day+=hour/24;        hour%=24;}

    while(day>28)
    {

        if(month%2==1)  {month++; day-=31;}      //luna cu 31 zile

            else if (month==2)                   // discutie dupa an pentru februarie
                        {month++;
                        if(year%4==0) day-=29;
                        else          day-=28;
                        }

        else if(month%2==0 && month!=2) {month++; day-=30;}  // luna cu 30 zile

    }

    while(month>12)
    {
        year+=month/12;
        month-=12;
    }


}
