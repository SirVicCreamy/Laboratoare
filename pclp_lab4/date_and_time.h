#ifndef DATE_AND_TIME_H_INCLUDED
#define DATE_AND_TIME_H_INCLUDED

class DateAndTime
{
public:
    DateAndTime(int=1, int=1, int=1990, int=0, int=0, int=0);
    void print();
    void tick(int);
private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;

};


#endif // DATE_AND_TIME_H_INCLUDED
