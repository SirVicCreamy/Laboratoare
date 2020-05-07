#ifndef DATETIME_H
#define DATETIME_H

#include "Time.h"
#include <iostream>
using std::ostream;

class DateTime : public Time
{
public:
    DateTime(int, int, int,  int, int, int);
    friend ostream& operator<<(ostream&, const DateTime&);

private:
    int day;
    int month;
    int year;

};


#endif // DATETIME_INCLUDED
