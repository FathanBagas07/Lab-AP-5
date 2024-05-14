#include <iostream>
using namespace std;

void tambah(float *a, float *b, float *hasil) {
    *hasil = *a + *b;
}

void kurang(float *a, float *b, float *hasil) {
    *hasil = *a - *b;
}

void kali(float *a, float *b, float *hasil) {
    *hasil = *a * *b;
}

void bagi(float *a, float *b, float *hasil) {
    if (*b != 0) {
        *hasil = *a / *b;
    } else {
        cout << "Error: Pembagian dengan nol!" << endl;
        *hasil = 0;
    }
}

int main() {
    system("cls");
    float angka1, angka2, hasil;
    char operasi, ulang;
    
    do {
    cout << "Masukkan dua angka dan pilih operasi (+, -, *, /) " << endl;
    cout << "Contoh : 15 / 5" << endl;
    cin >> angka1 >> operasi >> angka2;

    switch (operasi) {
        case '+':
            tambah(&angka1, &angka2, &hasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '-':
            kurang(&angka1, &angka2, &hasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '*':
            kali(&angka1, &angka2, &hasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '/':
            bagi(&angka1, &angka2, &hasil);
            if (angka2 != 0) {
                cout << "Hasil: " << hasil << endl;
            }
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
    }

    cout << endl;
    cout << "Apakah anda ingin mengulang program ? (Y/T) : ";
    cin >> ulang; } while (ulang=='Y'||ulang=='y');
    return 0;
}
