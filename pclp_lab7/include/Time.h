#ifndef TIME_H
#define TIME_H
class Time
{
public:
    Time(int,int,int);
    Time();

    void setTime(int, int, int);

    void print();

protected:
    int hour;
    int minute;
    int second;
};
#endif
