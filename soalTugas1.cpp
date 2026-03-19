#include <iostream>
using namespace std;

int main() {
    int berangkat, pulang;
    int bb, bp;
    string Transber, Transpul;

    cout << "Pilihan transportasi:\n";
    cout << "- Bus Linus : Gratis (06-08, 15-17)\n";
    cout << "- Bus Hijau : Rp5000 (07-18)\n";
    cout << "- Angkot    : Rp10000 (Setiap saat)\n\n";

    cout << "Masukkan jam keberangkatan (1-24): ";
    cin >> berangkat;
    cout << "Masukkan jam kepulangan (1-24): ";
    cin >> pulang;

    if (berangkat < 1 || berangkat > 24 || pulang < 1 || pulang > 24) {
        cout << "\nJam tidak valid!\n";
        return 0;
    }

    if ((berangkat >= 6 && berangkat <= 8) || (berangkat >= 15 && berangkat <= 17)) {
        Transber = "Bus Linus";
        bb = 0;
    } else if (berangkat >= 7 && berangkat <= 18) {
        Transber = "Bus Hijau";
        bb = 5000;
    } else {
        Transber = "Angkot";
        bb = 10000;
    }

    if ((pulang >= 6 && pulang <= 8) || (pulang >= 15 && pulang <= 17)) {
        Transpul = "Bus Linus";
        bp = 0;
    } else if (pulang >= 7 && pulang <= 18) {
        Transpul = "Bus Hijau";
        bp = 5000;
    } else {
        Transpul = "Angkot";
        bp = 10000;
    }

 
    cout << "\nBerangkat : " << Transber << " (Rp" << bb << ")\n";
    cout << "Pulang    : " << Transpul << " (Rp" << bp << ")\n";
    cout << "-----------------------------\n";
    cout << "Total biaya: Rp" << bb + bp << "\n";

}
