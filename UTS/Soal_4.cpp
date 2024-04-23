#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Input tinggi diamond (ganjil): ";
    int tinggi;
    cin >> tinggi;
    cout << endl;

    while (tinggi < 0 || tinggi % 2 == 0) {
    cout << "Inputan Harus Bilangan ganjil dan  Lebih Besar dari 0" << endl;
    cout << "Input tinggi diamond (ganjil) : ";
    cin >> tinggi;
    cout << endl;
    }

    for (int i = 0; i < tinggi; i++) {
        for (int j = (tinggi / 2 + 1); j > (0 + i); j--) {
            cout << " ";
        }
        for (int k = 0; k < i; i++) {
                cout << "* ";
        }
        cout << endl;
        if (i > tinggi / 2 + 1) {
            for (int l = 0; l < tinggi / 2 + 1; l++) {
                for (int m = 0; m <= l; m++) {
                    cout << " ";
                }
                for (int n = (tinggi / 2 + 1)-1; n > (0+l); n--) {
                    cout << "* ";
                }
                cout << endl;
            }
        }

    }
    return 0;
}