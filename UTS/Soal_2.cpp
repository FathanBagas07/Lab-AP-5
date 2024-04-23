#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Masukkan Suatu Bilangan Bulat : ";
    int bilangan;
    cin >> bilangan;
    cout << endl;

    while (bilangan <= 0) {
    cout << "Inputan Harus Lebih Besar dari 0" << endl;
    cout << "Masukkan Suatu Bilangan Bulat : ";
    cin >> bilangan;
    cout << endl;
    }

    string status;
    status = (bilangan % 2 == 0) ? "Genap":"Ganjil";
    cout << "Angka " << bilangan << " adalah bilangan " << status << endl;
    status = (bilangan % 3 == 0) ? " habis":" tidak habis";
    cout << "Angka " << bilangan << status << " dibagi 3" << endl;
    status = (bilangan % 5 == 0) ? " habis":" tidak habis";
    cout << "Angka " << bilangan << status << " dibagi 5" << endl;
    status = (bilangan % 7 == 0) ? " habis":" tidak habis";
    cout << "Angka " << bilangan << status << " dibagi 7" << endl;
    return 0;
}