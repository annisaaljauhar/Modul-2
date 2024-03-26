#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int n, num;
    double sum = 0;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
        sum += num;
    }

    char choice;
    cout << "\nPilih operasi yang ingin dilakukan:\n";
    cout << "1. Mencari nilai maksimum\n";
    cout << "2. Mencari nilai minimum\n";
    cout << "3. Menghitung nilai rata-rata\n";
    cin >> choice;

    switch (choice) {
        case '1':
            cout << "Nilai maksimum: " << *max_element(arr.begin(), arr.end()) << endl;
            break;
        case '2':
            cout << "Nilai minimum: " << *min_element(arr.begin(), arr.end()) << endl;
            break;
        case '3':
            cout << "Nilai rata-rata: " << sum / n << endl;
            break;
        default:
            cout << "Pilihan tidak valid.\n";
    }

    return 0;
}