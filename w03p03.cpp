#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
        cout << i << " ";
    cout << endl
         << "---------------------------------" << endl;
    int i = 1;
    while (i <= 10)
    {
        cout << i << " ";
        i++;
    }
    cout << endl
         << "---------------------------------" << endl;
    i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 10);

    return 0;
}