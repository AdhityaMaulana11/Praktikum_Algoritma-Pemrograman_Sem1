#include <iostream>
using namespace std;

const int maxArrLength = 100;
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
    cout << "|5. REXUS RXM-G5 Mouse Gaming              IDR 150.000     |" << endl;
    cout << "+==========================================================+" << endl;
}
void selectItems (string itemName[], int itemNumber[], int price[], int quantity[], int index)
{
    cout << "Silahkan pilih nomor produk yang ingin dibeli: ";
    cin >> itemNumber[index];
    cout << "Jumlah: ";
    cin >> quantity[index];
    switch (itemNumber[index])
    {
        case 1:
            itemName[index] = "Keychron K2 Keyboard";
            price[index] = 1500000;
            break;
        case 2:
            itemName[index] = "GAMEN Titan V";
            price[index] = 229000;
            break;
        
        case 3:
            itemName[index] = "AKKON Switch";
            price[index] = 3000;
            break;
        
        case 4:
            itemName[index] = "Still-Life Wireless headphone";
            price[index] = 559000;
            break;
        
        case 5:
            itemName[index] = "REXUS RXM-G5 Mouse Gaming";
            price[index] = 150000;
            break;
        
        default:
            cout << "Maaf barang nomor: " << itemNumber << " tidak tersedia!" << endl;
            break;
    }
    
}
void displayCart(string itemName[], int itemNumber[], int price[], int quantity[], int index)
{
    cout << "\tKeranjang" << endl;
    cout << "=========================" << endl;
    for (int i = 0; i < index; i++)
    {
        cout << i+1 << ". " << itemName[i] << "\nHarga: IDR." << price[i] << "\nJumlah: " << quantity[i] << endl;
    }
    cout << "=========================" << endl;
    
}
void payment (string itemName[], int itemNumber[], int price[], int quantity[], int index, int pay)
{
    int totalHarga = 0;
    if (index > 0)
    {
        cout << "\n#======================Check Out======================#" << endl;
        for (int i = 0; i <= index; i++)
        {
            cout << " Barang: " << itemName[i] << endl;
            cout << " Jumlah: " << quantity[i] << endl;
            cout << " Harga : IDR." << price[i] << endl;
            price[i] *= quantity[i];
            totalHarga += price[i];
        }
        cout << " Total : IDR." << totalHarga << endl;
        cout << "#=====================================================#" << endl;
        cout << "Silahkan masukkan nominal bayar [IDR]: ";
        cin >> pay;
    }
    else if (index == 0)
    {
        cout << "\n#======================Check Out======================#" << endl;
        for (int i = 0; i == index; i++)
        {
            cout << " Barang: " << itemName[i] << endl;
            cout << " Jumlah: " << quantity[i] << endl;
            cout << " Harga : IDR." << price[i] << endl;
            price[i] *= quantity[i];
            totalHarga = price[i];
        }
        cout << " Total : IDR." << totalHarga << endl;
        cout << "#=====================================================#" << endl;
        cout << "Silahkan masukkan nominal bayar [IDR]: ";
        cin >> pay;
    }
    
    while (pay < totalHarga)
    {
        system("cls");
        cout << "Mohon maaf nominal yang anda masukkan tidak cukup!" << endl;
        cout << "\n#======================Check Out======================#" << endl;
        for (int i = 0; i <= index; i++)
        {
            cout << " Barang: " << itemName[i] << endl;
            cout << " Jumlah: " << quantity[i] << endl;
            cout << " Harga : IDR." << price[i] << endl;
        }
        cout << " Total : IDR." << totalHarga << endl;
        cout << "#=====================================================#" << endl;
        cout << "Silahkan masukkan nominal bayar [IDR]: ";
        cin >> pay;
    
    }
    if (pay == totalHarga)
    {
        cout << "#==========================================================#" << endl;
        cout << "|                                                          |" << endl;
        cout << "|     Terima Kasih Telah Belanja di Yoru Online Store!     |" << endl;
        cout << "|        Barang Akan Segera Dikirim ke Tempat Anda!        |" << endl;
        cout << "|                                                          |" << endl;
        cout << "#==========================================================#" << endl;
    }
    else if (pay > totalHarga)
    {
        int kembalian = pay-totalHarga;
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
    string itemName[maxArrLength];
    int  itemNumber[maxArrLength], price[maxArrLength], quantity[maxArrLength], pay, index = 0;
    char addToCart, tanya = 'Y';
    system("Color 03");
    welcome();
    do
    {
        displayCatalog();
        selectItems(itemName, itemNumber, price, quantity, index);
        cout << "Bayar langsung/Tambah ke keranjang\n" << "[B].Bayar\t[K].Keranjang" << endl;
        cout << "Masukkan pilihan anda: "; cin >> addToCart;
        if (addToCart == 'K' || addToCart == 'k')
        {
            while (addToCart == 'K' || addToCart == 'k')
            {
                system("cls");
                index++;
                cout << "Barang ditambahkan ke keranjang" << endl;
                displayCart(itemName, itemNumber, price, quantity, index);
                displayCatalog();
                selectItems(itemName, itemNumber, price, quantity, index);
                cout << "Bayar langsung/Tambah ke keranjang\n" << "[B].Bayar\t[K].Keranjang" << endl;
                cout << "Masukkan pilihan anda: "; cin >> addToCart;
            }
        }
        system("cls");
        payment(itemName, itemNumber, price, quantity, index, pay);
        cout << "\nBelanja lagi? [Y/N]: ";
        cin >> tanya;
        cout << endl;
        system("cls");
    } while (tanya == 'Y' || tanya == 'y');
    return 0;
}
