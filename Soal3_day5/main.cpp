#include <iostream>

using namespace std;

int main() {
    int arr_051[10];

    cout << "Masukkan 10 bilangan bulat:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> arr_051[i];
    }

    int cari;
    cout << "Masukkan angka yang ingin Anda cari: ";
    cin >> cari;

    //set value asli
    bool ditemukan = false;
    int urutan;

    for (int i = 0; i < 10; i++) {
        if (arr_051
            [i] == cari) {
            ditemukan = true;
            urutan = i + 1;
            break; // Jika ditemukan, hentikan loop.
        }
    }

    if (ditemukan) {
        cout << "Angka " << cari << " ditemukan pada urutan ke-" << urutan << endl;
    } else {
        cout << "Angka " << cari << " tidak ditemukan dalam array.\n";
    }

    return 0;
}
