#include <iostream>
#include <iomanip>
using namespace std;

int A[3][5] = {
        {10, 20, 30, 40, 50},
        {1, 2, 3, 4, 5},
        {11, 12, 13, 14, 15}};

int B[3][5] = {
        {10, 20, 30, 40, 50},
        {1, 2, 3, 4, 5},
        {11, 12, 13, 14, 15}};

int C[3][5];
int baris, kolom;

int main (){
    cout << "Matriks A : " << endl;
    for (baris = 0; baris <= 2; baris++) {
        for (kolom = 0; kolom <= 4; kolom++) {
            cout << setw(3) << A[baris][kolom] << " ";
        }
        cout << endl;
    }
    cout << endl << "Matriks B : " << endl;
    for (baris = 0; baris <= 2; baris++) {
        for (kolom = 0; kolom <= 4; kolom++) {
            cout << setw(3) << B[baris][kolom] << " ";
        }

        cout << endl;
    }

    cout << endl << "Matriks Penjumlahan : " << endl;
    for (baris = 0; baris <= 2; baris++) {
        for (kolom = 0; kolom <= 4; kolom++) {
            C[baris][kolom] = A[baris][kolom] + B[baris][kolom];
            cout << setw(3) << A[baris][kolom] << " = " << setw(3)
            << B[baris][kolom] << " = " << setw(3) << C[baris][kolom]
            << " " << " | ";
            }


        cout << endl;
    }

        cout << endl << "Matriks C : " << endl;
    for (baris = 0; baris <= 2; baris++) {
        for (kolom = 0; kolom <= 4; kolom++) {
            cout << setw(3) << C[baris][kolom] << " ";
        }
        cout << endl;
    }
    return 0;
}
