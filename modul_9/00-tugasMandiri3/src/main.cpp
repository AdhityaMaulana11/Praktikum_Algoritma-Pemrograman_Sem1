#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string kali(string bil1, string bil2) {
    int n1 = bil1.size();
    int n2 = bil2.size();
    if (n1 == 0 || n2 == 0) {
        return "0";
    }

    vector<int> hasil(n1 + n2, 0);
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = n1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1 = bil1[i] - '0';

        i_n2 = 0;
        for (int j = n2 - 1; j >= 0; j--) {
            int n2 = bil2[j] - '0';
            int sum = n1 * n2 + hasil[i_n1 + i_n2] + carry;
            carry = sum / 10;
            hasil[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0) {
            hasil[i_n1 + i_n2] += carry;
        }
        i_n1++;
    }
    int i = hasil.size() - 1;
    while (i >= 0 && hasil[i] == 0) {
        i--;
    }

    if (i == -1) {
        return "0";
    }
    string s = "";
    while (i >= 0) {
        s += to_string(hasil[i--]);
    }
    return s;
}
int main() 
{
    cout << "=====Program perkalian 2 bilangan positif atau negatif yang tidak lebih dari 40 digit dengan function=====" << endl;
    string bil1, bil2;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    string hasil = kali(bil1, bil2);
    cout << "Hasil perkalian: " << hasil << endl;
    return 0;
}