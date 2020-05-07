#ifndef TIME2_H
#define TIME2_H
class Time
{
 public:
 //Time(int = 0, int = 0, int = 0); //constructor

 Time();
 Time(int);
 Time(int , int );
 Time(int , int , int );
 void tick(int);
 void setHour(int);
 void setMinute(int);
 void setSecond(int);


 void setTime(int, int, int); //asignarea valorilor
 void printShort(); //tiparire in format scurt
 void printLong (); //tiparire in format lung
 private:
 int hour; //0-23
 int minute; //0-59
 int second; //0-59
};
#endif
