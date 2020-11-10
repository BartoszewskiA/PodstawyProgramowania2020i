#include <iostream>
using namespace std;

void wypisz();
void dodaj_i_wypisz(int a, int b);
int dodaj(int a, int b);
void zwieksz(int &x);
int zwieksz2(int x);

    int main()
{
    //wypisz();
    //dodaj_i_wypisz(5, 10);
    //int w = dodaj(20,30);
    //cout<<w;
    //cout << dodaj(30, 50);
    int a = 10;
    //zwieksz(a);
    a=zwieksz2(a);
    cout << "a po zwiekszeniu " << a;
    return 0;
}

void dodaj_i_wypisz(int a, int b)
{
    cout << a + b;
}

int dodaj(int a, int b)
{
    //int wynik = a + b;
    return a + b;
}

void wypisz()
{
    cout << "To ja - funkcja Wypisz()";
}

void zwieksz(int &x)
{
    x++;
}

int zwieksz2(int x)
{
    return ++x;
}