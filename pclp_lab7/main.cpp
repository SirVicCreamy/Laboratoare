#include "HourlyWorker.h"
#include "Time.h"
#include "DateTime.h"

using namespace std;
int main()
{
//    Employee e1("Gheorghe", "Popescu");
//    e1.print();
//    HourlyWorker e2("Vasile", "Ionescu", 10, 9);
//    e2.print();

      Time t(13,42,50);
      DateTime d(21,11,2020,15,32,16);
      t.print();
      cout<<"\n\n";
      d.print();
      cout<<"\n";
    return 0;
}
