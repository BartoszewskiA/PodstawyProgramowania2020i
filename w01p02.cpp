#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cout << "x= ";
    cin >> x;
    cout << "y=";
    cin >> y;
    if (y)     // if (y!=0)
    {
        double wynik = (double)x / y;
        cout << "wynik= " << wynik;

    } else
    {
       cout << "nie dziel przez zero"; 
    }
    return 0;
}