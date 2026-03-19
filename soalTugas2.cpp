#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int a, b, c, d;
    int duadigitdepan, duadigitbelakang;
    bool alfa, beta;
    cout << "Masukkan bilangan 4 digit: ";
    cin >> n;

    if (n < 1000 || n > 9999) {
        cout << "Input harus bilangan 4 digit";
        return 0;
    }

    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;

    duadigitdepan = a * 10 + b;
    duadigitbelakang = c * 10 + d;

    alfa = ((a < b && b < c && c < d) || (a > b && b > c && c > d));
    beta = (abs(duadigitdepan - duadigitbelakang) >= 30);

    if (alfa && beta) {
        cout << "gamma";
    } else if (alfa) {
        cout << "alfa";
    } else if (beta) {
        cout << "beta";
    } else {
        cout << "delta";
    }

    return 0;
}
