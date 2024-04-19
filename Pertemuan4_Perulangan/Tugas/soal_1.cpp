#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Masukkan Banyak Angka Yang Ingin Di Tampilkan : ";
    int n;
    cin >> n;
    
    int deret = 1;
    cout << deret << ' ';
    for (int i = 0; i <= n-2 ; i++) {
        if (i % 2 == 0) {
            deret += 5;
            cout << deret << ' ';
        }
        else if (i % 2 == 1) {
            deret += 3;
            cout << deret << ' ';
        }
    }
    return 0;
}