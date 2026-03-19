#include <iostream>
using namespace std;

int main() {
    int pilihan, berat;
    long long hargaawal, hargaakhir;
    char pilihan2;

    cout << "1. JNE\n2. SiCepat\n3. Gojek\n";
    cout << "Pilih jasa (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            cout << "Dalam kota atau luar kota? (y/n): ";
            cin >> pilihan2;

            cout << "Masukkan berat (kg): ";
            cin >> berat;

            if (pilihan2 == 'y') {
                hargaawal = 10000;
            } else if (pilihan2 == 'n') {
                hargaawal = 20000;
            } else {
                cout << "Pilihan tujuan tidak valid\n";
                return 0;
            }

            hargaakhir = hargaawal * berat;

            if (berat > 10) {
                cout << "Anda mendapatkan diskon 50%\n";
                hargaakhir = hargaakhir / 2;
            } else {
                cout << "Tidak ada diskon\n";
            }

            cout << "Harga yang harus dibayar: " << hargaakhir << "\n";
            break;
        }

        case 2: {
            cout << "Dalam kota atau luar kota? (y/n): ";
            cin >> pilihan2;

            cout << "Masukkan berat (kg): ";
            cin >> berat;

            if (pilihan2 == 'y') {
                hargaawal = 8000;
            } else if (pilihan2 == 'n') {
                hargaawal = 18000;
            } else {
                cout << "Pilihan tujuan tidak valid\n";
                return 0;
            }

            if (berat > 15) {
                cout << "Anda mendapatkan gratis ongkir\n";
                hargaakhir = 0;
            } else {
                hargaakhir = hargaawal * berat;
            }

            cout << "Harga yang harus dibayar: " << hargaakhir << "\n";
            break;
        }

        case 3: {
            cout << "Gojek hanya untuk dalam kota.\n";
            cout << "Masukkan berat (kg): ";
            cin >> berat;

            hargaakhir = 12000LL * berat;

            if (berat > 5) {
                cout << "Anda mendapatkan diskon Rp10000\n";
                hargaakhir -= 10000;
                if (hargaakhir < 0) hargaakhir = 0;
            } else {
                cout << "Tidak ada diskon\n";
            }

            cout << "Harga yang harus dibayar: " << hargaakhir << "\n";
            break;
        }

        default:
            cout << "Pilihan tidak valid\n";
    }

    return 0;
}
