#include <iostream>
#include <map>
using namespace std;
int main()
{
    // Membuat map dengan key bertipe string dan value bertipe int
    map<string, int> data;
    // Menambahkan elemen ke dalam map
    data["apel"] = 10;
    data["jeruk"] = 20;
    data["pisang"] = 15;
    // Mengakses nilai menggunakan key
    cout << "Jumlah apel: " << data["apel"] << endl;
    cout << "Jumlah jeruk: " << data["jeruk"] << endl;
    cout << "Jumlah pisang: " << data["pisang"] << endl;
    return 0;
}
