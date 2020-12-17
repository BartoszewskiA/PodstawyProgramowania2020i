#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tab[100];
    int n = 0;
    string s;
    do
    {
        getline(cin, s);
        if (s.length() != 0)
        {
            tab[n] = s;
            n++;
        }
    } while (s.length() != 0);

    for (int i = 0; i < n; i++)
        cout << tab[i] << endl;

    int ile_liter = 0;
    int ile_liter_bez_spacji = 0;

    // for (int i=0; i<n; i++)
    //     {
    //         s=tab[i];
    //         for (int j=0; j<s.length(); j++)
    //         {
    //             ile_liter++;
    //             if (s[j]!=' ') ile_liter_bez_spacji++;
    //         }
    //     }
    for (int i = 0; i < n; i++)
    {
        ile_liter += tab[i].length();
        for (int j=0; j<tab[i].length(); j++)
            if (tab[i][j]!=' ') ile_liter_bez_spacji++;
    }

    cout << "wierszy: " << n << endl
         << "znakow: " << ile_liter << endl
         << "znakow bez spacji: " << ile_liter_bez_spacji;

    return 0;
}