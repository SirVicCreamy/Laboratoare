#include <iostream>
using std::cout;
#include "time2.h"
/*
Time::Time(int hr, int minn, int sec)
{
 setTime(hr, minn, sec);
}*/
//Cerinta2-------------------------------------
void Time::setHour(int hr)
{
    hour = (hr >= 0 && hr < 24) ? hr : 0;
}
void Time::setMinute(int minn)
{
    minute = (minn >= 0 && minn < 60) ? minn : 0;
}
void Time::setSecond(int sec)
{
    second = (sec >= 0 && sec < 60) ? sec : 0;
}


Time::Time() {}
Time::Time(int hr )
{
    setHour(hr);
}
Time::Time(int hr, int minn )
{
    setHour(hr);
    setMinute(minn);
}
Time::Time(int hr, int minn, int sec)
{
    setHour(hr);
    setMinute(minn);
    setSecond(sec);
}
//Cerinta2-------------------------------------



//Cerinta3-------------------------------------
void Time::tick(int i)
{
    second+=i;
    if(second>=60)  {minute+=second/60;  second%=60;}
    if(minute>=60)  {hour+=minute/60;    minute%=60;}
    if(hour>=24)     hour%=24;

}
//Cerinta3-------------------------------------


void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}
void Time::printShort()
{
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute;
}
void Time::printLong()
{
    cout << ((hour == 0 || hour == 12) ?
             12 : hour % 12)
         << ":" << (minute < 10 ? "0" : "") << minute
         << ":" << (second < 10 ? "0" : "") << second
         << (hour < 12 ? " AM" : " PM");
}











