#include <iostream>

using namespace std;
double srednia(int, int);
double srednia(int, int, int);
double srednia(double, double);

    int main()
{
    cout << srednia(10, 20);
    cout << endl;
    cout << srednia(10, 40, 50);
    cout << endl;
    cout << srednia(2.5, 4.6);
    return 0;
}

double srednia(int x, int y)
{
    return (x + y) / 2.0;
}

double srednia(int x, int y, int z)
{
    return (x + y + x) / 3.0;
}

double srednia(double x, double y)
{
    return (x + y) / 2;
}