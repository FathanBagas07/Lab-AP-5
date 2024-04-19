#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int panjang, lebar;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    for (int i = 0; i < lebar; ++i) {
        for (int j = 0; j < panjang; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
