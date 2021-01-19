#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };
    osoba ktos, ktos_inny;

    string temp;
    stringstream bufor;

    cout<<"Podaj wiek: ";
    getline(cin,temp);
    bufor << temp;
    bufor >> ktos.wiek;
    cout<<"Podaj imie: ";
    getline(cin,ktos.imie);
    cout<<"Podaj nazwisko: ";
    getline(cin,ktos.nazwisko);
    

    

    cout<< "Imie: "<<ktos.imie<<endl;
    cout<< "Nazwisko: "<<ktos.nazwisko<<endl;
    cout<< "Wiek: "<<ktos.wiek;

    return 0;
}