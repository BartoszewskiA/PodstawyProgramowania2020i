#include <iostream>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    } ktos = {"Jan", "Kowalski", 30};

    //osoba ktos = {"Jan", "Kowalski", 30};

    ktos.imie = "Janek";
    cout<< "Imie: "<<ktos.imie<<endl;
    cout<< "Nazwisko: "<<ktos.nazwisko<<endl;
    cout<< "Wiek: "<<ktos.wiek;

    return 0;
}