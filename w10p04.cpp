#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("wynik.txt", ios::app);
    cout<<"co dopisac :";
    getline(cin,s);
    plik<<s<<endl;
 
    plik.close();
    return 0;
}