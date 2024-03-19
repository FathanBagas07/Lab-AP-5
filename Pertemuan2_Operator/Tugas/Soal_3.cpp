#include <iostream>
#include <cmath>
using namespace std;

int main () {
    system ("cls");

    cout << "Program Menghitung Luas Permukaan dan Volume Bangun Ruang\n";
    cout << "==========================================================\n";
    cout << "Pilihan Bangun Ruang :\n";
    cout << "1. Kerucut\n";
    cout << "2. Limas Segitiga\n";
    cout << "3. Bola\n";
    cout << "4. Prisma Segitiga\n";
    cout << "Masukkan Pilihan Anda : ";

    const float phi = 3.14;
    char pilihan;
    cin >> pilihan;

    switch (pilihan)
    {
    case '1' : {
        float jari_jari, tinggi, volume, luas_permukaan;
        cout << "Kerucut\n";
        cout << "Input jari-jari     : ";
        cin >> jari_jari;
        cout << "Input tinggi        : ";
        cin >> tinggi;

        float s = sqrt((jari_jari*jari_jari)+(tinggi*tinggi));

        luas_permukaan = phi*jari_jari*s;
        cout << "Luas Permukaan      = " << luas_permukaan << endl;

        volume = ((phi*(jari_jari*jari_jari)*tinggi)/3);
        cout << "Volume              = " << volume << endl;
        break;
    }
    case '2' : {
        cout << "Limas Segitiga\n";
        cout << "Input Alas Segitiga        : ";
        float alas;
        cin >> alas;

        cout << "Input Tinggi Alas Segitiga : ";
        float tinggi_alas;
        cin >> tinggi_alas;

        cout << "Input Tinggi Limas         : ";
        float tinggi_limas;
        cin >> tinggi_limas;

        cout << "Input Panjang Sisi Tegak 1 : ";
        float panjang_tegak1;
        cin >> panjang_tegak1;

        cout << "Input Tinggi Sisi Tegak 1  : ";
        float tinggi_tegak1;
        cin >> tinggi_tegak1;

          cout << "Input Panjang Sisi Tegak 2 : ";
        float panjang_tegak2;
        cin >> panjang_tegak2;

        cout << "Input Tinggi Sisi Tegak 2  : ";
        float tinggi_tegak2;
        cin >> tinggi_tegak2;

        
        cout << "Input Panjang Sisi Tegak 3 : ";
        float panjang_tegak3;
        cin >> panjang_tegak3;

        cout << "Input Tinggi Sisi Tegak 3  : ";
        float tinggi_tegak3;
        cin >> tinggi_tegak3;

        float luas_permukaan = ((alas * tinggi_alas) *(0.5)) + ((panjang_tegak1*tinggi_tegak1*0.5)+(panjang_tegak2*tinggi_tegak2*0.5)+(panjang_tegak3*tinggi_tegak3*0.5));
        cout << "Luas Permukaan             = " << luas_permukaan << endl;

        float volume = ((((alas * tinggi_alas)*(0.5))*tinggi_limas)/3);
        cout << "Volume                     = " << volume << endl;
        break;
    }
    case '3' : {
        cout << "Bola\n";
        cout << "Input Jari-Jari Bola : ";
        float jari_jari;
        cin >> jari_jari;

        float luas_permukaan = 4*phi*(jari_jari*jari_jari);
        cout << "Luas Permukaan       = " << luas_permukaan << endl;

        float volume = (phi*(jari_jari*jari_jari*jari_jari)*4)/3;
        cout << "Volume               = " << volume << endl;
        break;
    }
    case '4' : {
        cout << "Prisma Segitiga\n";
        cout << "Input Panjang Alas  : ";
        float alas;
        cin >> alas;

        cout << "Input Tinggi Alas   : ";
        float tinggi_alas;
        cin >> tinggi_alas;

        cout << "Input Tinggi Prisma : ";
        float tinggi_prisma;
        cin >> tinggi_prisma;

        cout << "Input Sisi 1 Alas   : ";
        float sisi1_alas;
        cin >> sisi1_alas;

        cout << "Input Sisi 2 Alas   : ";
        float sisi2_alas;
        cin >> sisi2_alas;

        cout << "Input Sisi 3 Alas   : ";
        float sisi3_alas;
        cin >> sisi3_alas;

        float luas_permukaan = 2 * (0.5 * alas * tinggi_alas) + (sisi1_alas + sisi2_alas + sisi3_alas) * tinggi_prisma;
        cout << "Luas Permukaan      = " << luas_permukaan << endl;

        float volume = (0.5 * alas * tinggi_alas) * tinggi_prisma;
        cout << "Volume              = " << volume << endl;
        break;
    }
    
    default: cout << "Input Anda Salah\n";break;
    }
    
    return 0;
}