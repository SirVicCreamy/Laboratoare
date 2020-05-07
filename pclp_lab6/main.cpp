#include "complex.h"
using std::cout;
using std::cin;
int main()
{
    Complex n1(-2,3);
    Complex n2(1,-4);
    cout<<"z1 ="<<n1;
    cout<<"z2 ="<<n2;
    Complex n3 = n1*n2;
    cout<<"\n";
    cout<<"z1+z2 ="<<n1+n2;
    cout<<"z3 = z1*z2 = "<<n3;
    cout<<"!z3 = "<<!n3;
    n3++;
    ++n3;
    cout<<n3;

    Complex n4(4,1);
//    cin>>n4;
    cout<<n4;

    return 0;
}
