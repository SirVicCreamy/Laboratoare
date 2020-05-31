#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<string, int> catalog;
    int nota;
    string student;
    for(int i=0; i<5; i++)
    {

        cout<<"Nume: ";
        cin>>student;
        do
        {
            cout<<"Nota: ";
            cin>>nota;

        }
        while(nota>10 || nota <1);
        catalog.insert (pair<string,int>(student,nota));
        cout<<"\n";

    }
    cout<<"\n";

    map<string,int>::iterator it = catalog.begin();
    for (it=catalog.begin(); it!=catalog.end(); it++)
        cout << it->first << " : " << it->second << "\n";

/*
Popescu
5
Ionescu
3
Iordache
-5
5
Marinescu
5
Bratescu
1000
10
*/



    /*
    vector<string> e;
    e.push_back("Primul element");
    e.push_back("Al doilea element");
    e.push_back("Al treilea element");
    cout << "Citirea elementelor dupa indice:" << endl;
    for(int i=0; i < e.size(); i++)
        cout << e[i] << endl;
    cout << endl << "Citirea elementelor cu iterator:" << endl;
    vector<string>::const_iterator it;
    for(it=e.begin(); it!=e.end(); it++)
        cout << *it << endl;
    cout << endl << "Citirea elementelor in ordine inversa:" << endl;
    vector<string>::reverse_iterator rit;
    for(rit=e.rbegin(); rit!=e.rend(); ++rit)
        cout << *rit << endl;


        */
    return 0;
}
