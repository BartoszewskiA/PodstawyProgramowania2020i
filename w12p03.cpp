#include <iostream>

using namespace std;

int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = tab;

    //cout<<tab[3]<<endl;
    //p=p+3;
    // cout<<*p;
    // for (int i=0; i<10; i++ )
    //     cout<<tab[i]<<" ";

    for (int i=0; i<10; i++ )
        cout<<*(p+i)<<" ";

    return 0;
}