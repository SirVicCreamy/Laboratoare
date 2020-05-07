#include <iostream>
using std::cout;
using std::endl;
#include "time2.h"
#include "date.h"
#include "date_and_time.h"

int main()
{
    Time t1, //toate argumentele implicite
         t2(2), //minute si second implicite
         t3(21, 34), //second implicit
         t4(23, 59, 59), //toate valorile specificate
         t5(27, 74, 99); //toate valorile eronate

    cout << "Obiect creat cu: " << endl;
    cout << "t1:    toate argumentele implicite: " << endl << " ";
    t1.printShort();
    cout << endl << " ";
    t1.printLong();
    cout << "\nt2:  hour specificat; minute si second implicite:"
         << endl << " ";
    t2.printShort();
    cout << endl << " ";
    t2.printLong();

    cout << "\nt3:  hour si minute specificate; second implicit:"
         << endl << " ";
    t3.printShort();
    cout << endl << " ";
    t3.printLong();

    cout << "\nt4:  hour, minute si second specificate:"
         << endl << " ";
    t4.printShort();
    cout << endl << " ";
    t4.printLong();

    cout << "\nt5:  valori invalide pentru hour, minute si second:"
         << endl << " ";
    t5.printShort();
    cout << endl << " ";
    t5.printLong();
    cout << endl;

//Cerinta3-----------------------------------------------------
    cout<<"\nDupa utilizarea functiei tick (2 ore 30 min 15 secunde) pe t4,t5:\n";
    t4.tick(2*3600+60*30+15);
    t5.tick(2*3600+60*30+15);
    t4.printShort();
    cout<<endl;
    t4.printLong();
    cout<<endl<<endl;
    t5.printShort();
    cout<<endl;
    t5.printLong();
    cout<<"\n\n";
//Cerinta3------------------------------------------------------




//Cerinta4------------------------------------------------------
   /* Date date1(5, 3, 2007), date2;

    cout << "date1 = ";
    date1.print();
    cout << endl << "date2 = ";
    date2.print();
    date2 = date1;//asignare prin copierea membru cu membru
     cout << "\nDupa copierea membru cu membru, date2 = ";
    date2.print();
    cout << endl;
    */
//Cerinta4------------------------------------------------------




//Cerinta5------------------------------------------------------
    DateAndTime d1(25,2,2019,23,59,59);
    DateAndTime d2(25,2,2020,23,59,59);
    DateAndTime d3(30,12,2019,23,59,59);
    DateAndTime d4;
    DateAndTime d5(99,99,10000,99,99,99);
    DateAndTime d6(4,4,2004,22,50,40);
    cout<<"\n\nUtilizarea functiei tick (clasa DateAndTime) \n\n";
    cout<<"Cazul lunii Februarie (tick:5 zile) \n";
    d1.print();
    d1.tick(3600*24*5);
    d1.print();
    cout<<"\nCazul lunii Februarie ,an bisect (tick:5 zile) \n";
    d2.print();
    d2.tick(3600*24*5);
    d2.print();
    cout<<"\nTrecerea la an nou (tick: 1h 1min 1 sec) \n";
    d3.print();
    d3.tick(3661);
    d3.print();
    cout<<"\nConstructor implicit(tick: 4321sec  = 1h 12min 1sec) \n";
    d4.print();
    d4.tick(4321);
    d4.print();
    cout<<"\nValori eronate (tick: 1h 12min 1sec)\n";
    d5.print();
    d5.tick(4321);
    d5.print();
    cout<<"\nData random (tick: 50zile 1h 12min 1sec)\n";
    d6.print();
    d6.tick(3600*24*50+4321);
    d6.print();

//Cerinta5------------------------------------------------------
    return 0;
}
