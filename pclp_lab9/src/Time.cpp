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




 ostream& operator<<(ostream& out, const Time& t)
{
    out << (t.hour < 10 ? "0" : "") << t.hour
         << ":" << (t.minute < 10 ? "0" : "") << t.minute
         << ":" << (t.second < 10 ? "0" : "") << t.second;

   return out;

}











