#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("wynik.txt", ios::out);
    plik<<16<<endl;
    plik<<12<<endl;
    plik<<2020;
    plik.close();
    return 0;
}