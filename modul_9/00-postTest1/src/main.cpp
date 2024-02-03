#include <iostream>
#include <string>
using namespace std;

void salinStr(string *str, string *salin) 
{
    *salin = *str;
}
int main(int argc, char const *argv[])
{
    string str, salin;
    cout << "==========rogram menyalin string menggunakan function pointer==========" << endl;
    cout << "Masukkan string yang akan disalin: "; 
    getline(cin, str);
    salinStr(&str, &salin);
    cout << "Address dari string awal: " << &str << "\nAddress dari salin      : " << &salin << endl;
    cout << "\nString " << "'" << salin << "' " << "berhasil disalin!" << endl;
    cout << "Alamat string yang telah disalin: " << &salin << endl;
    return 0;
}
