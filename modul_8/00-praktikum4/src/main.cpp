#include <iostream>
#include <conio.h>
using namespace std;

int segitiga (int alas, int t)
{
    int LS = 0.5 * alas * t;
    return LS;
}
int persegi (int s)
{
    int LP = s * s;
    return LP;
}
int main(int argc, char const *argv[])
{
    int a;
    float LP, LS, s, alas, t;
    char ulang;
    show:
    cout << "\n1. Menghitung luas persegi." << endl;    
    cout << "2. Menghitung luas segitiga." << endl;    
    cout << "Masukkan pilihan : "; cin >> a;
    switch (a)
    {
        case 1:
            cout << "Masukkan sisi : "; cin >> s;
            LP = persegi(s);
            cout << "Luas Persegi adalah = " << LP << endl;
            break;
        
        case 2:
            cout << "Masukkan alas : "; cin >> alas;
            cout << "Masukkan tinggi : "; cin >> t;
            LS = segitiga(alas, t);
            cout << "Luas Persegi adalah = " << LS << endl;
            break;
    }
    cout << "Mau coba lagi? [Y/T] : ";
    ulang = getch();
    if (ulang == 'Y' || ulang == 'y')
    {
        goto show;
    }
    else if (ulang == 'T' || ulang == 't')
    {
        cout << endl;
        cout << "T E R I M A K A S I H" << endl;
    }
    
    return 0;
}
