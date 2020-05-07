#ifndef TIME_H
#define TIME_H

#include <iostream>
using std::ostream;

class Time
{
public:
    Time(int,int,int);
    Time();

    void setTime(int, int, int);

   friend ostream& operator<<(ostream&, const Time&);

protected:
    int hour;
    int minute;
    int second;
};
#endif
