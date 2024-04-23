#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Masukkan Suatu Bilangan Bulat : ";
    int bilangan;
    cin >> bilangan;
    cout << endl;

    while (bilangan < 0) {
    cout << "Inputan Harus Lebih Besar dari 0" << endl;
    cout << "Masukkan Suatu Bilangan Bulat : ";
    cin >> bilangan;
    cout << endl;
    }

    int prima;
    for (int i = 1; i <= bilangan; i++) {
        if ( bilangan % i == 0) {
            prima++;
        }
    }
    if ( prima == 2 ) {
        cout << bilangan << " adalah bilangan prima";
    }
    else {
        cout << bilangan << " bukan bilangan prima";
    }
    return 0;
}