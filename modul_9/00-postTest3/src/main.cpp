#include <iostream>
#include <vector>

using namespace std;

void hitung_Mean_RataRata(vector<int> data) {
    int n = data.size();
    int frekuensi[100000] = {0};
    double sum = 0;

    for (int i = 0; i < n; i++) {
        frekuensi[data[i]]++;
        sum += data[i];
    }

    cout << "Frekuensi data: " << endl;
    for (int i = 0; i < 100000; i++) {
        if (frekuensi[i] > 0) {
            cout << i << ": " << frekuensi[i] << endl;
        }
    }

    double average = sum / n;
    cout << "Rata-rata data: " << average << endl;
}

int main() 
{
    int n;
    cout << "==========Program menghitung frekuensi dan rata-rata data yang di inputkan user==========" << endl;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    vector<int> data(n);
    cout << "Masukkan data: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    hitung_Mean_RataRata(data);
    return 0;
}