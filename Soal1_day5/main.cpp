#include <iostream>

using namespace std;

int main() {
    int gnjl_051[5];
    int jml = 0;

    cout << ">>>>> Menghitung Bilangan Ganjil <<<<<"<<endl;

    //Perulangan untuk input bilangan
    for (int i = 1; i <= 5; i++) {
        int bilangan;
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> bilangan;

        //Pengecekan apakah bilangan inputan adalah Ganjil atau bukan
        if (bilangan % 2 != 0) {
            gnjl_051[jml] = bilangan;
            jml++;
        }
    }

    //Mengecek apakah ada bilangan gnjl_051 di variabel jml
    if (jml > 0) {
        cout << "Bilangan Ganjil yang dimasukkan adalah: ";
        for (int i = 0; i < jml; i++) {
            cout << gnjl_051[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Tidak ada bilangan Ganjil yang dimasukkan." << endl;
    }

    return 0;
}
