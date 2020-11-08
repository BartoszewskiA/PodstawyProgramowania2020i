#include <iostream>

using namespace std;

int main()
{
    int tab[30] = {0};
    int x;
    cout << "x=";
    cin >> x;
    int n = 0;
    do
    {
        tab[n] = x % 2;
        n++;
        x = x / 2;
    } while (x > 0);

    for (int i = n-1; i >= 0; i--)
        cout << tab[i];

    return 0;
}