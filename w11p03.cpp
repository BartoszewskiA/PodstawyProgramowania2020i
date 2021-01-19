#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    const int L_PRAC = 3;
    osoba pracownicy[L_PRAC];
    string temp;
    stringstream bufor;

    for (int i = 0; i < L_PRAC; i++)
    {
        cout << "Podaj imie: ";
        getline(cin, pracownicy[i].imie);
        cout << "Podaj nazwisko: ";
        getline(cin, pracownicy[i].nazwisko);
        cout << "Podaj wiek: ";
        getline(cin, temp);
        bufor << temp;
        bufor >> pracownicy[i].wiek;
    }

    for (int i = 0; i < L_PRAC; i++)
    {
        cout << "Imie: " << pracownicy[i].imie << endl;
        cout << "Nazwisko: " << pracownicy[i].nazwisko << endl;
        cout << "Wiek: " << pracownicy[i].wiek<<endl;
    }

    return 0;
}