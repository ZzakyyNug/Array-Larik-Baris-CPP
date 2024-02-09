#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int menuu;
    int arr_051[10];
    int n = 0;

    do {
        // Menu Awal
        cout << "Menu:\n";
        cout << "1. Input Array\n";
        cout << "2. Menampilkan Isi Array\n";
        cout << "3. Menampilkan Nilai Minimum\n";
        cout << "4. Menampilkan Nilai Maksimum\n";
        cout << "5. Menampilkan Mean\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu (0-5): ";
        cin >> menuu;

        switch (menuu) {
            case 1:
                //Pengecekan Isi Array dengan catatan : Bila array suda ada isinya maka akan diberi peringatan apakah akan mengisi ulang array
                if (n > 0) {
                    char jwb;
                    cout << "Array sudah terisi. Apakah Anda yakin ingin mengisi ulang? (y/n): ";
                    cin >> jwb;
                    if (jwb == 'y' || jwb == 'Y') {
                        n = 0;
                    }
                }
                //Memasukkan input kedalam array
                if (n == 0) {
                    cout << "Masukkan 10 bilangan bulat:\n";
                    for (int i = 0; i < 10; i++) {
                        cout << "Bilangan ke-" << i + 1 << ": ";
                        cin >> arr_051[i];
                    }
                    n = 10;
                    cout << "\nBilangan Anda Sudah Masuk Kedalam Array."<<endl;
                }
                cout << "\nAkan Kembali ke Menu Awal dalam 2 Detik.";
                sleep(2);
                system("cls");
                break;
            case 2:
                if (n > 0) {
                    cout << "Isi Array:\n";
                    for (int i = 0; i < n; i++) {
                        cout << arr_051[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Array kosong.\n";
                }
                cout << "\nAkan Kembali ke Menu Awal dalam 2 Detik.";
                sleep(2);
                system("cls");
                break;
            case 3:
                if (n > 0) {
                    int minn = arr_051[0];
                    for (int i = 1; i < n; i++) {
                        if (arr_051[i] < minn) {
                            minn = arr_051[i];
                        }
                    }
                    cout << "Nilai Minimum: " << minn << endl;
                } else {
                    cout << "Array kosong.\n";
                }
                cout << "\nAkan Kembali ke Menu Awal dalam 2 Detik.";
                sleep(2);
                system("cls");
                break;
            case 4:
                if (n > 0) {
                    int maxx = arr_051[0];
                    for (int i = 1; i < n; i++) {
                        if (arr_051[i] > maxx) {
                            maxx = arr_051[i];
                        }
                    }
                    cout << "Nilai Maksimum: " << maxx << endl;
                } else {
                    cout << "Array kosong.\n";
                }
                cout << "\nAkan Kembali ke Menu Awal dalam 2 Detik.";
                sleep(2);
                system("cls");
                break;
            case 5:
                if (n > 0) {
                    double mean = 0.0;
                    for (int i = 0; i < n; i++) {
                        mean += arr_051[i];
                    }
                    mean /= n;
                    cout << "Mean: " << mean << endl;
                } else {
                    cout << "Array kosong.\n";
                }
                cout << "\nAkan Kembali ke Menu Awal dalam 2 Detik.";
                sleep(2);
                system("cls");
                break;
            case 0:
                cout << "Keluar dari program. Terima kasih!\n";
                break;
            default:
                cout << "Pilihan menu tidak valid. Silakan coba lagi.\n";
                cout << "\nAkan Kembali ke Menu Awal dalam 2 Detik.";
                sleep(2);
                system("cls");
                break;
        }
    } while (menuu != 0);

    return 0;
}
