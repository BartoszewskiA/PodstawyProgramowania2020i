#include <iostream>

using namespace std;

int main()
{
    double *p;

     p = new double;

     *p = 100;
     cout<<*p;

     delete p;
    return 0;
}