#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[100];
    int ld = 0, lu = 0;
    int sd =0 , su=0;
    for (int i = 0; i < 100; i++)
        tab[i] = rand() % 201 - 100;
    for (int i = 0; i < 100; i++)
        cout << tab[i] << " ";
    for (int i = 0; i < 100; i++)
        if (tab[i] >= 0)
            {
                ld++;
                sd=sd+tab[i];  //sd+=tab[i];
            }
        else
            {
                lu++;
                su=su+tab[i]; //su+=tab[i];
            }
            
    cout<<endl;
    cout<<"dodatnich: "<<ld<<" srednia: "<<(double)sd/ld<<endl;
    cout << "ujemnych: " << lu << " srednia: " << (double)su / lu;
    return 0;
}