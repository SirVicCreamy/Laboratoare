#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Date
{
 public:
 //constructor implicit
 Date(int = 1, int = 1, int = 1990);
 void print();
 private:
 int day;
 int month;
 int year;
};
//constructor fara verificarea valorilor
Date::Date(int d, int m, int y)
{
 day = d;
 month = m;
 year = y;
}
//Tipareste data in forma zi-luna-an
void Date::print()
{
 cout << day << '-' << month << '-' << year;
}


#endif // DATE_H_INCLUDED
