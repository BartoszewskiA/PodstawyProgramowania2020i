#include <iostream>

using namespace std;

int main()
{
    int x, s = 0, i = 0;
    do
    {
        cout << i + 1 << ":";
        cin >> x;
        if (x >= 0)
        {
            s = s + x;
            i++;
        }
    } while (x >= 0);
    if (i > 0)
        cout << "suma =" << s << endl
             << "Srednia= " << (double)s / i;
    else
        cout << "brak danych";

    return 0;
}