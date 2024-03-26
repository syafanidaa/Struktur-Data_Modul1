#include <iostream>
#include <string>
using namespace std;
// Definisi struct data menu
struct Menu
{
    string nama;
    int harga;
};
int main()
{
    // Deklarasi array menu
    Menu menu_burger[4] = {
        {"Beef Burger", 30000},
        {"Chicken Burger", 25000},
        {"Egg Burger", 20000},
        {"Cheese Burger", 15000}};
    // Menampilkan menu
    cout << "Menu Burger:" << endl;
    for (int i = 0; i < 4; ++i)
    {
        cout << i + 1 << ". " << menu_burger[i].nama << " - Rp " << menu_burger[i].harga << endl;
    }
    // Meminta input untuk pilihan menu
    cout << "Masukkan nomor menu yang dipilih (1-4): ";
    int pilihan;
    cin >> pilihan;
    // Validasi pilihan menu
    if (pilihan < 1 || pilihan > 4)
    {
        cout << "Pilihan menu tidak valid!" << endl;
        return 1; // Keluar dari program dengan kode error
    }
    // Menghitung total harga
    int total_harga = menu_burger[pilihan - 1].harga;
    // Menampilkan total harga
    cout << "Total harga: Rp " << total_harga << endl;
    return 0;
}