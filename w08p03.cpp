#include <iostream>
#include <string>

using namespace std;
// wypisz od końca
int main()
{
    string tekst;
    cout<<"Podaj tekst: ";
    getline(cin,tekst);
    for (int i=tekst.length()-1; i>=0; i--)
    {
        cout<<" "<<i+1<<": "<<tekst[i];
    }
    return 0;
}