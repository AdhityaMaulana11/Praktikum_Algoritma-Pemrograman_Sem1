#include <iostream>
#include <conio.h>
using namespace std;

int a = 9;
void lokal();
int main(int argc, char const *argv[])
{
    cout << "Penggunaan variabel global" << endl;
    cout << "\nNilai a didalam fungsi main() = " << a;
    lokal();
    cout << "\nNilai a setelah pemanggilan fungsi lokal() = " << a;
    getch();
    cout << "\nHal ini terlihat bahwa variabel a yang dideklarasikan diluar" << endl;
    cout << "\nFungsi main(), dapat digunakan dalam fungsi main dan fungsi lokal" << endl;
    return 0;
}
void lokal() 
{
    a = a + 90;
}