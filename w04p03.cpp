#include <iostream>

using namespace std;

int main()
{
    int tab2d[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int j=0; j<4; j++)
    {
        for (int i = 0; i < 3; i++)
            cout << tab2d[j][i] << "\t";
        cout<<endl;
    }
    
   

    return 0;
}