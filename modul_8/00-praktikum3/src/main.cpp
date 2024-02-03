#include <iostream>
#include <conio.h>
using namespace std;

void garis(); // prototype function
int main(int argc, char const *argv[])
{
    garis(); // panggil function
    cout << "NIP NAMA PNS" << endl;
    garis(); // panggil function
    cout << "198108272011012003 SRI GUSTRIANI" << endl;
    cout << "198209112022011001 RIO PRIANTAMA" << endl;
    garis(); // panggil function
    return 0;
}
void garis() // detail function
{
    for (int i = 0; i <= 40; i++)
    {
        cout << "-";
    }
    cout << endl;
}
