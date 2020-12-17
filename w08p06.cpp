#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Ala ma kota";
    s = s.substr(0, s.length() - 1);
    cout << endl
         << s;
    return 0;
}