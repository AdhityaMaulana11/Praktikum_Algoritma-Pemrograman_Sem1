#include <iostream>
using namespace std;

void equalValues(int a, int b, float c, float d)
{
    if (a == b && c == d)
    {
        cout << "Kedua integer dan kedua float bernilai sama" << endl;
    }
    else if (a == b && c != d)
    {
        cout << "Kedua integer bernilai sama dan kedua float bernilai berbeda" << endl;
    }
    else if (a != b && c == d)
    {
        cout << "Kedua integer bernilai berbeda dan kedua float bernilai sama" << endl;
    }
    else
    {
        cout << "Kedua integer dan kedua float bernilai berbeda" << endl;
    }
}
int main(int argc, char const *argv[])
{
    int a, b;
    float c, d;
    cout << "Program menguji kesamaan nilai antara tipe data integer dan tipe data float" << endl;
    cout << "Ketik dua integer:" << endl;
    cin >> a; cin >> b;
    cout << "Ketik dua float:" << endl;
    cin >> c; cin >> d;
    equalValues(a, b, c, d);
    return 0;
}

