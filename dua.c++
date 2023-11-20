
#include <iostream>
using namespace std;

int main()
{
    int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar;
    int biayaMotor = 2000;
    int biayaMobil = 5000;

    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;
    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;
    cout << "Masukkan jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    cout << "Masukkan jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    int durasiParkir = (24 - jamMasuk) + jamKeluar;
    int totalBiayaMotor = jumlahMotor * biayaMotor * durasiParkir;
    int totalBiayaMobil = jumlahMobil * biayaMobil * durasiParkir;
    int totalPendapatan = totalBiayaMotor + totalBiayaMobil;

    cout << "Total pendapatan Anda sebagai penjaga portal parkir UNISBA: Rp " << totalPendapatan << endl;

    return 0;
}
