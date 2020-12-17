#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    cout<<"Podaj tekst: ";
    getline(cin,tekst);
    for (int i=0; i<tekst.length(); i++)
    {
        cout<<tekst[i]<<endl;
    }
    return 0;
}