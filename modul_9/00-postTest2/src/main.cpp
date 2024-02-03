#include <iostream>
#include <string>
using namespace std;

void jmlhSalinStr (string &awal, string &tujuan, int &jumlah) 
{
    tujuan = awal;
    jumlah = tujuan.length();
}
int main(int argc, char const *argv[])
{
    string str, salin; 
    int jumlah;
    cout << "==========Program menyalin string, dan menghitung jumlah karakter dalam string==========" << endl;
    cout << "Masukkan string yang akan di salin: ";
    getline(cin, str);
    jmlhSalinStr(str, salin, jumlah);
    cout << "========================================================================================" << endl;
    cout << "String awal                    : " << str << endl;
    cout << "Address string awal            : " << &str << endl;
    cout << "String disalin                 : " << salin << endl;
    cout << "Address String yg telah disalin: " << &salin << endl; 
    cout << "Jumlah karakter                : " << jumlah << endl; 
    return 0;
}