#include <iostream>

using namespace std;

int main()
{
    int dana = 100;
    int* wskaznik;
    wskaznik = &dana;

    cout<<dana<<endl;
    //cout<< *wskaznik;
    (*wskaznik)++;
    return 0;
}