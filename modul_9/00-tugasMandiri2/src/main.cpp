#include <iostream>
#include <cstring>
using namespace std;

// function menjumlahkan 2 buah bilangan positif atau negatif
void pnjmlhDuaBilangan(string angka1, string angka2) {
    int len1 = angka1.length(), len2 = angka2.length();
    int maxLength = max(len1, len2);
    int hasil[maxLength + 1];
    memset(hasil, 0, sizeof(hasil));
    int carry = 0, digitSum = 0;
    for (int i = 0; i < maxLength; i++) {
        int digit1 = i < len1 ? angka1[len1 - 1 - i] - '0' : 0;
        int digit2 = i < len2 ? angka2[len2 - 1 - i] - '0' : 0;
        digitSum = digit1 + digit2 + carry;
        carry = digitSum / 10;
        hasil[i] = digitSum % 10;
    }
    if (carry != 0) {
        hasil[maxLength] = carry;
        maxLength++;
    }
    cout << "Hasil penjumlahan        : ";
    for (int i = maxLength - 1; i >= 0; i--) {
        cout << hasil[i];
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    string angka1, angka2;
    cout << "=====Program penjumlahan 2 bilangan positif atau negatif yang tidak lebih dari 40 digit dengan function=====" << endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> angka1;
    cout << "Masukkan bilangan kedua  : ";
    cin >> angka2;
    pnjmlhDuaBilangan(angka1, angka2);
    return 0;
}
