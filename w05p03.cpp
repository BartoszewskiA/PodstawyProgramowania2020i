#include <iostream>

using namespace std;
void wypisz(int a, int b, int c=1, int d=10);

int main()
{
     const int a=100;
    wypisz(a,2*a);
    return 0;
}

void wypisz(int a, int b, int c ,int d)
{
    cout << "a=" << a << endl
         << "b=" << b << endl
         << "c=" << c << endl
         << "d=" << d << endl;
}