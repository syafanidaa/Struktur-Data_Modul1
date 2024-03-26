#include <iostream>
using namespace std;
class Kucing {
public:
 string jenis;
 string warna;
 int berat;
 // Metode (fungsi) dari class Mobil
 void info() {
 cout << "Kucing " << jenis << " warna " << warna << " berat badan " << berat << "kg" <<endl;
 }
};
int main() {
 Kucing kucing1;
 // Mengatur nilai atribut objek
 kucing1.jenis = "British Short Hair";
 kucing1.warna = "Abu abu";
 kucing1.berat = 4;
 // Memanggil metode objek
 kucing1.info();
 return 0;
}
