#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"podaj tekst: ";
    getline(cin,s);
    //s.erase(0,3);
    //s.insert(0,"*******");
    //s.insert(s.length(),"*******");
    //s.replace(0,3,"*****");
    for (int i=0; i<s.length(); i++)
        s[i] = tolower(s[i]);
    s[0]=toupper(s[0]);

    cout<<s;
    return 0;
}