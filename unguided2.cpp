#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan jumlah elemen untuk dimensi pertama: ";
    cin >> x;
    cout << "Masukkan jumlah elemen untuk dimensi kedua: ";
    cin >> y;
    cout << "Masukkan jumlah elemen untuk dimensi ketiga: ";
    cin >> z;


    int arr[x][y][z];
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\nElemen-elemen array yang dimasukkan:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Array[" << i << "][" << j << "][" << k << "]: " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
