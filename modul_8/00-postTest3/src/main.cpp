#include <iostream>
using namespace std;
/*program menghitung deret fibbonaci dengan
input angka*/
int fibonacci(int n)
{
    int bil1 = 1, bil2 = 1, selanjutnya, hasil;
    cout << "Bilangan fibonacci:\n";
    for (int i = 1; i <= n; ++i) 
    {
        if(i == 1) 
        {
            cout << bil1 << " ";
            hasil += bil1;
            continue;
        }
        if(i == 2) 
        {
            cout << bil2 << " ";
            hasil += bil2;
            continue;
        }
        selanjutnya = bil1 + bil2;
        bil1 = bil2;
        bil2 = selanjutnya;
        hasil += selanjutnya;
        cout << selanjutnya << " ";
    }
    cout << "\nHasil penjumlahan deret fibonacci diatas adalah = " << hasil << endl;
    cout << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Program menghitung deret fibonacci melalui input user" << endl; 
    cout << "Masukkan jumlah bilangan fibonacci: " ;
    cin >> n;
    fibonacci(n);
    return 0;
}
