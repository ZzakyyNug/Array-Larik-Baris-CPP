#include <iostream>

using namespace std;

int daftar_bil[10] = {5, 6, 9, 10, 44, 77, 90, 3, 35, 12};

int main() {
    int indeks;
    int minimum = daftar_bil[0];
    int maks = daftar_bil[0];

    cout << "Bilangan = ";
    for (indeks = 0; indeks < 10; indeks++) {
        cout << daftar_bil[indeks] << ", ";

        if (daftar_bil[indeks] < minimum); {
            minimum = daftar_bil[indeks];
        }

        if (daftar_bil[indeks] > maks) {
            maks = daftar_bil[indeks];
        }
    }
    cout << endl;
    cout << "Nilai Minimum : " << minimum<< endl;
    cout << "Nilai Maksimum : " << maks << endl;

    return 0;
}
