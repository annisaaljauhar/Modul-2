#include <iostream>
using namespace std;

int main() {
    cout << "===========================================" << endl;
    cout << " Menentukan Bilangan Ganjil dan Genap " << endl;
    cout << "===========================================" << endl;
    cout << endl;
    
    int b;
    cout << "Masukkan Panjang Array: ";
    cin >> b;
    
    int bilangan[b];
    for(int i = 0; i < b; i++) {
        cout << "Array ke-" << i << ": ";
        cin >> bilangan[i];
    }
    
    cout << endl;
    cout << "Data Array: ";
    for(int i = 0; i < b; i++) {
        cout << bilangan[i] << " ";
    } 
    cout << endl;
    
    cout << "Bilangan Genap: ";
    for (int i = 0; i < b; i++) {
        if (bilangan[i] % 2 == 0) {
            cout << bilangan[i] << " ";
        }
    }
    cout << endl;
    
    cout << "Bilangan Ganjil: ";
    for (int i = 0; i < b; i++) {
        if (bilangan[i] % 2 != 0) {
            cout << bilangan[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
