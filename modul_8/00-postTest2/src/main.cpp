#include <iostream>
using namespace std;
/*program penjumlahan deret bilnagan berdasarkan
angka yang diinputkan*/

int penjmDeret(int a) 
{
    int hasil;
    for (int i = 1; i <= a; i++)
    {
        hasil += i;
        if (i == a)
        {
            cout << i;
        }
        else
        {
            cout << i << " + ";
        }
    }
    cout << " = " << hasil << endl;
    return 0;
}
int main(int argc, char const *argv[])
{
    int a;
    cout << "=====program penjumlahan deret bilnagan berdasarkan angka yang diinputkan=====" << endl;
    cout << "Masukkan angka: "; cin >> a;
    cout << "Hasil:" << endl;
    penjmDeret(a);
    cout << "\n";
    return 0;
}
