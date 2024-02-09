#include <iostream>

using namespace std;

int main()
{
    int A[3][5], B[3][3], tambah[3][3], kurang_051[3][3];

    // Memasukkan elemen matriks
    cout << "Masukkan elemen matriks A (3x3):\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan elemen matriks B (3x3):\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "]: ";
            cin >> B[i][j];
        }
    }

    //Mencetak Array
    cout << "\nMatriks A:\n";
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++){
            cout << A[i][j] << " ";
            if (j == 2) {
                cout << endl;
            }
        }
    }

    cout << "\nMatriks B:\n";
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++){
            cout << B[i][j] << " ";
            if (j == 2) {
                cout << endl;
            }
        }
    }

    //Menjumlahkan
    cout << endl << "Matriks Penjumlahan : " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++){
            tambah[i][j] = A[i][j] + B[i][j];
            cout << A[i][j] << " + " << B[i][j] << " = " << tambah[i][j] << " ";
        }
        cout << endl;
    }

    //Pengurangan
    cout << endl << "Matriks Pengurangan : " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++){
            kurang_051 [i][j] = A[i][j] - B[i][j];
            cout << A[i][j] << " - " << B[i][j] << " = " << kurang_051 [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
