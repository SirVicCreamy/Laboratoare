#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Stack.h"
#include "Queue.h"
int main()
{

    Queue<int> coada(5);
    int elem = 1;
    while(coada.push(elem))
    {
        cout<<"A fost adaugat: "<<elem<<"\n";
        elem++;
    }
    cout<<"Coada este acum plina \nNu se mai poate insera "<<elem<<"\n";
    cout<<"--------------\n";
    while(coada.pop(elem))
        cout<<"A fost eliminat: "<<elem<<"\n";
    cout<<"Coada este acum goala \nNu se mai pot extrage elemente \n";

 /*   Stack<double> doubleStack(5);
 double f = 1.1;
 cout << "Inserarea elementelor in doubleStack\n";

 while(doubleStack.push(f))
 {
 cout << f << ' ';
 f += 1.1;
 }

 cout << "\nStiva este plina. "
 << "Nu se mai poate insera elementul " << f
 << "\n\nExtragerea elementelor din doubleStack\n";

 while(doubleStack.pop(f))
 cout << f << ' ';

 cout << "\nStiva este goala. "
 << "Nu se mai pot extrage elemente\n";
*/

    return 0;
}
