#include <iostream>
using namespace std;

int main() {
    float ip, gaji;
    cout << "Masukkan IPK: ";
    cin >> ip;
     if (ip < 1 || ip > 4.0) {
        cout << "IPK tidak valid!";
    
    }
    else {
    cout << "Masukkan gaji orang tua: ";
    cin >> gaji;
   if (ip >= 3.5) {
        cout << "Kategori 4";
    } else if (gaji < 1.0) {
        cout << "Kategori 1";
    } else if (gaji >= 1.0 && gaji <= 5.0) {
        if (ip >= 2.0) {
            cout << "Kategori 3";
        } else {
            cout << "Kategori 2";
        }
    } else {
        cout << "Tidak berhak mendapatkan beasiswa";
    }

    return 0;
}
}
