#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int wylosowane[6];
    srand(time(NULL));
    int ile = 0, temp;
    bool flaga;
    do
    {
        flaga = false;
        temp = rand() % 49 + 1;
        for (int i = 0; i < ile; i++)
            if (wylosowane[i] == temp)
                flaga = true;
        if (!flaga)
        {
            wylosowane[ile] = temp;
            ile++;
        }

    } while (ile < 6);

    for (int i=0;i<6;i++)
        cout<<wylosowane[i]<<" ";

    return 0;
}