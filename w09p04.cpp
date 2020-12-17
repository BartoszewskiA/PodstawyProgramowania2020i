#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int znaki[] = {'@','#','&','%','$','!'};
int l_znakow = 6;

void losuj_male_litery(string &pass, int ile);
void dodaj_duze_litery(string &pass, int ile);
void wstaw_znak(string &pass);

int main()
{
    string pass ="";
    srand(time(NULL));
    // cout<<(int)'a'<<" "<<(int)'z';
    losuj_male_litery(pass, 20);
    dodaj_duze_litery(pass,3);
    wstaw_znak(pass);
    cout<<"pass: "<<pass;
    return 0;
}

void losuj_male_litery(string &pass, int ile)
{
    for (int i=0; i<ile; i++)
        pass = pass+ (char)(rand()%25 +97);
}

void dodaj_duze_litery(string &pass, int ile)
{
    int poz;
    for (int i=0; i<ile; i++)
    {
        poz = rand() % pass.length();
        pass[poz] = toupper(pass[poz]);
    }    
}

void wstaw_znak(string &pass)
{
    int poz = rand() % pass.length();
    int poz_znaku = rand() % l_znakow;
    pass[poz] = znaki[poz_znaku];
}