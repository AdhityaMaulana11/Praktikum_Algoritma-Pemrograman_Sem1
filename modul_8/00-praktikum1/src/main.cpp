#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 15;
    cout << "Pemanggilan variabel lokal" << endl;
    cout << "\nnilai variabel didalam fungsi main() : " << a << endl;
    cout << "\nnilai ini terlihat bahwa variabel a tidak terdapat diluar" << endl;
    cout << "\nfungsi lokal" << endl;
    cout << "\nfungsi lokal sendiri tidak dikenali oleh fungsi lokal" << endl;
    cout << "\nyang dideklarasikan pada fungsi main()" << endl;
    getch();
    
    return 0;
}
