#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string s;
    int x;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "brak pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        cout << s<<endl;
    }

    plik.close();
    return 0;
}