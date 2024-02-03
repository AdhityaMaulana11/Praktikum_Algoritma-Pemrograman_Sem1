#include <iostream>
using namespace std;

void deret3nPlusSatu (int n)
{
    cout << "Deret 3n+1\n" << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        cout << n << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Masukkan bilangan awal: "; cin >> n;
    deret3nPlusSatu(n);
     
    return 0;
}
