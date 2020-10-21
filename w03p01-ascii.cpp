#include <iostream>

using namespace std;

int main()
{
    int znak = 27;

    for ( ;znak<256; )
    {
        cout << (char)znak << " ";
        znak++;
    }
    return 0;
}