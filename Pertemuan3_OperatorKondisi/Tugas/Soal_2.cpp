#include <iostream>
using namespace std;

int main() {
    system("cls");
    

    int anak, gaji, bonus, pajak, gaji_bersih;
    char golongan;
    string nama;

    cout << "Input Nama : ";
    getline (cin,nama);
    cout << "Masukkan Golongan (1,2,3): ";
    cin >> golongan;
    cout << "Input Jumlah Anak : ";
    cin >> anak;
    cout << endl;

    switch (golongan)
    {
    case '1': gaji = 5000000;break;
    case '2': gaji = 3000000;break;
    case '3': gaji = 2500000;break;
    default: cout << "Input salah harus angka maks 3";break;
    }
    if (anak <= 0) {
    bonus = 0;
    }
    else if (anak <= 2) {
    bonus = 500000*anak;
    }
    else {
    bonus = 500000*2 + 750000*(anak-2);
    }
    pajak = (gaji + bonus) * 0.05;
    gaji_bersih = gaji - pajak ;

    cout << "Gaji Total  : Rp." << gaji_bersih << endl;
    
    
    return 0;
}