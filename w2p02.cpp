#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "podaj numer dnia tygornia: ";
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "Pn";
        break;
    case 2:
        cout << "WT";
        break;
    case 3:
        cout << "Sr";
        break;
    case 4:
        cout << "Czw";
        break;
    case 5:
        cout << "Pi";
        break;
    case 6:
        cout << "So";
        break;
    case 7:
        cout << "nie";
        break;
    default:
        cout << "to nie jest numer dnia tygodnia";
    }

    return 0;
}