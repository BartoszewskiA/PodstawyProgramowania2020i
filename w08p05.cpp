#include <iostream>
#include <string>

using namespace std;
// wyszukiwanie znaków
int main()
{
    string tekst;
    cout<<"Podaj tekst: ";
    getline(cin,tekst);
    //int nr = tekst.find('A',2);
    int poz=-1;
    do
    {
        poz= tekst.find('A',poz+1);
        if (poz>=0) cout<<poz<<" ";
    } while (poz >=0);
 

    return 0;
}