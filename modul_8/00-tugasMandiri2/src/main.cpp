#include <iostream>
using namespace std;

int fibonacci_kelinci(int bulan) {
    if (bulan == 0) {
        return 0;  // Tidak ada kelinci pada bulan 0
    } else if (bulan == 1) {
        return 1;  // Satu pasang kelinci pada bulan pertama
    } else {
        // menggunakan rekursif untuk menentukan 
        // Jumlah kelinci pada bulan ke-n adalah jumlah kelinci pada bulan ke-(n-1) & ke-(n-2)
        return fibonacci_kelinci(bulan - 1) + fibonacci_kelinci(bulan - 2);
    }
}

int main() {
    int bulan_ke_tiga = 3;
    int jumlah_kelinci = fibonacci_kelinci(bulan_ke_tiga);
    cout << "Setelah " << bulan_ke_tiga << " bulan, jumlah kelinci adalah " << jumlah_kelinci << " pasang." << std::endl;

    return 0;
}
