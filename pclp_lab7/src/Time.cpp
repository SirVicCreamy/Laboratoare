#include <iostream>
using std::cout;
#include "Time.h"


Time::Time()
{
    setTime(0,0,0);
}


Time::Time(int hr, int minn, int sec)
{
    setTime(hr,minn,sec);
}

void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::print()
{   cout<<"--Time print-- \n";
    cout << (hour < 10 ? "0" : "") << hour
         << ":" << (minute < 10 ? "0" : "") << minute
         << ":" << (second < 10 ? "0" : "") << second;

}











