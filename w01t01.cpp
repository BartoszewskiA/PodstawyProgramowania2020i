#include <iostream>
using namespace std;
int main()
{
    int nr;
    cout << "Podaj numer dnia tygodnia";
    cin >> nr;
    if (nr == 1)
        cout << "Niedziela";
    else if (nr == 2)
        cout << "Poniedziałek";
    else if (nr == 3)
        cout << "Wtorek";
    else if (nr == 4)
        cout << "Sroda";
    else if (nr == 5)
        cout << "Czwartek";
    else if (nr == 6)
        cout << "Piatek";
    else if (nr==7)
        cout << "Sobota";
        else cout <<"To nie jest prawidłowy numer";
    return 0;
}