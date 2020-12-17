#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int znaki[] = {
    'a','ą','b','c','ć','d','e','f','g','h'};

int main()
{
    srand(time(NULL));
    for (int i=0; i<10; i++)
        cout<< (char)znaki[rand()%11];
    return 0;
}