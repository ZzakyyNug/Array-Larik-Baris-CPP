#include <iostream>

using namespace std;

string daftar_mhs[40];
int jml_mhs;

int main() {
    cout << "Masukkan Jumlah Nama Mhs Yang akan disimpan : ";
    cin >> jml_mhs;

    int i;
    string nama;
    for (int i = 0; i < jml_mhs; i++) {
        cout << "Masukkan nama Mahasiswa : ";
        cin >> nama;
        daftar_mhs[i] = nama;
    }
    cout << "Nama yang sudah anda simpan adalah : " << endl;
    for (int i = 0; i < jml_mhs; i++) {
        cout << i +1 << ". " << daftar_mhs[i] << endl;
    }
    return 0;
}
