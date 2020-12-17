
#include <iostream>
#include <string>

using namespace std;
// odwróć łąńcuch
int main()
{
    string tekst;
    string temp="";
    cout<<"Podaj tekst: ";

    getline(cin,tekst);
    for (int i=tekst.length()-1; i>=0; i--)
    {
        temp=temp+tekst[i];
    }
    tekst = temp;
    cout<<"Wynik= "<<tekst;
    return 0;
}