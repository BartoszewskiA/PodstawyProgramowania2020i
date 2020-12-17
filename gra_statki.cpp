#include <iostream>

using namespace std;

int plansza[10][10] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 1, 1, 0,
    0, 1, 0, 0, 3, 0, 2, 0, 0, 0,
    0, 4, 0, 0, 1, 0, 0, 0, 2, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 1, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 1, 1, 1, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0};

// legenda:
// 0 - puste pole
// 1 - okret - niezatopiony
// 2 - pudlo
// 3 - okret trafiony
// 4 - okret oswietlony

void rysuj_plansze(bool pokaz_statki = false);
void strzal(string w, int k);
void sprawdz_sasiednie(int x, int y);

int main()
{
    int kolumna;
    string wiersz;
    do
    {
        rysuj_plansze();
        cout << "Podaj litre: ";
        cin >> wiersz;
        if (wiersz == "x")
        {
            rysuj_plansze(true);
            break;
        }
        cout << "Podaj liczbe: ";
        cin >> kolumna;
        strzal(wiersz, kolumna);
    } while (wiersz != "x");

    return 0;
}

void strzal(string w, int k)
{
    int x = k - 1;
    char wiersz = w[0];
    int y = (int)wiersz - 65;

    switch (plansza[y][x])
    {
    case 0:
        plansza[y][x] = 2;
        break;
    case 1:
        plansza[y][x] = 3;
        break;
    case 4:
        plansza[y][x] = 3;
        break;
    }
    sprawdz_sasiednie(x,y);
}

void sprawdz_sasiednie(int x, int y)
{
    if(y>0 && plansza[y-1][x]==1) plansza[y-1][x]=4;
    if(y<9 && plansza[y+1][x]==1) plansza[y+1][x]=4;
    if(x>0 && plansza[y][x-1]==1) plansza[y][x-1]=4;
    if(x<9 && plansza[y][x+1]==1) plansza[y][x+1]=4;
}


void rysuj_plansze(bool pokaz_statki)
{
    system("cls");
    cout << "  ";
    for (int i = 1; i <= 10; i++)
        cout << " " << i << " ";
    cout << endl
         << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << (char)(65 + i) << "  ";
        for (int j = 0; j < 10; j++)
            switch (plansza[i][j])
            {
            case 0:
                cout << " . ";
                break;
            case 1:
                if (pokaz_statki)
                    cout << (char)178 << (char)178 << (char)178;
                else
                    cout << " . ";
                break;
            case 2:
                cout << " * ";
                break;
            case 3:
                cout << (char)176 << "#" << (char)176;
                break;
            case 4:
                cout << (char)176 << (char)176 << (char)176;
                break;
            }
        cout << endl;
    }
    cout << endl;
}
