#include <iostream>

using namespace std;
void zwieksz(int *px, int *py);

int main()
{
    int x=10, y=20;
    zwieksz(&x,&y);
    cout<<x<<" "<<y;
    return 0;
}

void zwieksz(int *px, int *py)
{
    (*px)++;
    (*py)++;
}