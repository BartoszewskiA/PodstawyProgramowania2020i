#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Podaj tekst: ";
    getline(cin,s);
    //s="";
    //s=" ";
    //s.clear();
    cout<<"Tekst: "<< s<<" ma "<<s.length()<<" znakow";
    return 0;
}