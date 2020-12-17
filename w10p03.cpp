#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string s;
    //int x, suma = 0;
    float x, suma =0;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "brak pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        if (s.length() > 0)
        {
            //  x = atoi(s.c_str());
            x = atof(s.c_str());
            cout << x << endl;
            suma += x;
        }
    }
    cout << "suma=" << suma;
    plik.close();
    return 0;
}