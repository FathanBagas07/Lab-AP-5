#include <iostream>

using namespace std;

int main() {
    float input, hasil;
    system ("cls");
    cout << "Konversi meter ke kilometer"<< endl;
    cout << "===========================" << endl;
    cout << "Masukkan jarak dalam satuan meter : ";
    cin >> input;
    
    hasil = input / 1000;

    cout << "Hasil konversi : " << hasil << " km" << endl;
}