#include <iostream>

using namespace std;

void zwieksz(int *t);
void wypisz (int *t);
int main()
{
    int tab[] = {1,2,3,4,5,6,7,8,9,10};
    int tab2[] = {10,11,12,13,14,15,16,17,18,19};

    zwieksz(tab);
    zwieksz(tab2);
    wypisz(tab);
    wypisz(tab2);
    return 0;
}

void zwieksz(int *t)
{
    for (int i=0; i<10; i++)
        {
           // (*(t+i))++;
           (*t)++;
           t++;
        }
}

void wypisz (int *t)
{
    for (int i=0; i<10;i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<endl;
}