#include <iostream>
using namespace std;

int main() { 
    system("cls");
    
    cout << " Aturan : Sebuah angka berupa integer A (1000 <= A <= 9000) dan B(-A <= B <= 9999-A),\nA menyatakan tahun dan B menyatakan interval" << endl;
    cout << "Input Tahun (A) : ";
    int tahun;
    cin >> tahun;

    cout << "Input Interval (B) : ";
    int interval;
    cin >> interval;

    if (tahun >= 1000 && tahun <= 9000 && interval >= (-tahun) && interval <= (9999-tahun)) {
        string kabisat;
    if (interval > 0) {
        for (int i = 0; i<=interval ; i++) {
            int tahun_seterusnya = tahun + i;
            if (tahun_seterusnya % 4 == 0) {
                kabisat = "Kabisat";
            }
            else {
                kabisat = "Bukan Kabisat";
            }
            cout << tahun_seterusnya << " " << kabisat << endl;
        }
    }
    else if (interval < 0) {
        for (int i = interval; i<=0 ; i++) {
            int tahun_seterusnya = tahun-(i-interval);
            if (tahun_seterusnya % 4 == 0) {
                kabisat = "Kabisat";
            }
            else {
                kabisat = "Bukan Kabisat";
            }
            cout << tahun_seterusnya << " " << kabisat << endl;
        }
    }
    else {
        if (tahun % 4 == 0) {
                kabisat = "Kabisat";
            }
            else {
                kabisat = "Bukan Kabisat";
            }
        cout << tahun << " " << kabisat;
    }
    }
    else {
        cout << "Inputan Anda Salah";
    }
    return 0;
}