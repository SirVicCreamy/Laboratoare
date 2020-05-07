#ifndef DATETIME_H
#define DATETIME_H

#include "Time.h"

class DateTime : public Time
{
public:
    DateTime(int, int, int,  int, int, int);
    void print();

private:
    int day;
    int month;
    int year;

};


#endif // DATETIME_INCLUDED
