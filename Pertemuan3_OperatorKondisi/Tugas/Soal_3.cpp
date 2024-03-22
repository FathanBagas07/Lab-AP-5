#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("cls");
    
    cout << fixed ;
    cout << setprecision (2);
    cout << "Input berat badan (kg): ";
    float bb;
    cin >> bb;

    cout << "Masukkan tinggi anda (m): ";
    float tb;
    cin >> tb;

    float bmi;
    bmi = bb /(tb*tb);

    string kategori;
    if (bmi < 18.5) {
        kategori="Berat Badan Kurang";
    }
    else if (bmi >= 18.5 && bmi <25) {
        kategori="Berat badan normal";
    }
    else if (25 >=bmi && bmi <30) {
        kategori="Berat badan berlebih";
    }
    else {
        kategori = "Obesitas";
    }
    
    cout << "BMI Anda              : " << bmi << endl;
    cout << "Kategori Berat Badan  : " << kategori << endl;
    
    return 0;
}