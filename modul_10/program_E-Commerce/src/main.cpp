#include <iostream>
using namespace std;

void welcome () 
{
    cout << "#==========================================================#" << endl;
    cout << "|                                                          |" << endl;
    cout << "|           Selamat Datang di Yoru Online Store!           |" << endl;
    cout << "|                                                          |" << endl;
    cout << "#==========================================================#" << endl;
}
void displayCatalog () 
{
    cout << "+======================Katalog Produk======================+" << endl;
    cout << "|1. Keychron K2 Keyboard                   IDR 1.500.000   |" << endl;
    cout << "|2. GAMEN Titan V                          IDR 229.000     |" << endl;
    cout << "|3. AKKON Switch                           IDR 3.000/Piece |" << endl;
    cout << "|4. Still-Life Wireless headphone          IDR 559.000     |" << endl;
    cout << "|5. REXUS RXM-G5 Gaming Mouse              IDR 150.000     |" << endl;
    cout << "+==========================================================+" << endl;
}
void selectItems (int *itemNumber, int *price, int *quantity, string *itemName)
{
    cout << "Silahkan pilih nomor produk yang ingin dibeli: ";
    cin >> *itemNumber;
    cout << "Jumlah: ";
    cin >> *quantity;
    switch (*itemNumber)
    {
    case 1:
        *itemName = "Keychron K2 Keyboard";
        *price = 1500000;
        break;
    
    case 2:
        *itemName = "GAMEN Titan V";
        *price = 229000;
        break;
    
    case 3:
        *itemName = "AKKON Switch";
        *price = 3000;
        break;
    
    case 4:
        *itemName = "Still-Life Wireless headphone";
        *price = 559000;
        break;
    
    case 5:
        *itemName = "REXUS RXM-G5 Mouse Gaming";
        *price = 150000;
        break;
    
    default:
        cout << "Maaf barang nomor: " << *itemNumber << " tidak tersedia!" << endl;
        break;
    }
    
}
void payment (int itemNumber, int price, int quantity, string itemName, int pay)
{
    if (quantity > 1)
    {
        price *= quantity;
    }
    cout << "\n#======================Check Out======================#" << endl;
    cout << " Barang: " << itemName << endl;
    cout << " Jumlah: " << quantity << endl;
    cout << " Total : " << price << endl;
    cout << "#=====================================================#" << endl;
    cout << "Silahkan masukkan nominal bayar [IDR]: ";
    cin >> pay;
    while (pay < price)
    {
        system("cls");
        cout << "\n###=====Maaf nominal yang anda masukkan tidak cukup!=====###" << endl;
        cout << "\n#======================Check Out======================#" << endl;
        cout << " Barang: " << itemName << endl;
        cout << " Jumlah: " << quantity << endl;
        cout << " Total : " << price << endl;
        cout << "#=====================================================#" << endl;
        cout << "Silahkan masukkan nominal bayar [IDR]: ";
        cin >> pay;
    
    }
    if (pay == price)
    {
        cout << "#==========================================================#" << endl;
        cout << "|                                                          |" << endl;
        cout << "|     Terima Kasih Telah Belanja di Yoru Online Store!     |" << endl;
        cout << "|        Barang Akan Segera Dikirim ke Tempat Anda!        |" << endl;
        cout << "|                                                          |" << endl;
        cout << "#==========================================================#" << endl;
    }
    else if (pay > price)
    {
        int kembalian = pay-price;
        cout << "Kembalian anda adalah [IDR]: " << kembalian << endl;
        cout << "\n#==========================================================#" << endl;
        cout << "|                                                          |" << endl;
        cout << "|     Terima Kasih Telah Belanja di Yoru Online Store!     |" << endl;
        cout << "|        Barang Akan Segera Dikirim ke Tempat Anda!        |" << endl;
        cout << "|                                                          |" << endl;
        cout << "#==========================================================#" << endl;
    }    
}
int main(int argc, char const *argv[])
{
    int itemNumber, price, quantity, pay;
    string itemName;
    char tanya = 'Y';
    welcome();
    do
    {
        displayCatalog();
        selectItems(&itemNumber, &price, &quantity, &itemName);
        payment(itemNumber, price, quantity, itemName, pay);
        cout << "\nBelanja lagi? [Y/N]: ";
        cin >> tanya;
        cout << endl;
        system("cls");
    } while (tanya == 'Y' || tanya == 'y');
    return 0;
}