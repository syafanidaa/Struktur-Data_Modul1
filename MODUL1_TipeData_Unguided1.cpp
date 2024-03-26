#include <iostream>
using namespace std;
int a, t1, t2;
int luas_alas(int a, int t1)
{
    return 0.5 * a * t1;
}
int keliling_alas(int a)
{
    return 3 * a;
}
int luas_prisma(int a, int t1, int t2)
{
    return 2 * luas_alas(a, t1) + keliling_alas(a) * t2;
}
int main()
{1
    cout << "Masukkan Panjang Sisi Alas Prisma (cm): ";
    cin >> a;
    cout << "Masukkan Tinggi Segitiga Alas Prisma (cm): ";
    cin >> t1;
    cout << "Masukkan Tinggi Prisma (cm): ";
    cin >> t2;
    cout << "Luas Alas : " << luas_alas(a, t1) << " cm2" << endl;
    cout << "Keliling : " << keliling_alas(a) << " cm2" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "LUAS PRISMA dengan tinggi " << t2 << " : " << luas_prisma(a, t1, t2) << " cm2" << endl;
        t2 += 3;
    }
    return 0;
}
