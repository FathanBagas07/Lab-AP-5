#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Masukkan Sebuah Kalimat : ";
    string kalimat;
    getline(cin,kalimat);
    cout << endl;

    int urut;
    urut = 0;
    cout << "Hasil Akhir : " << endl;
    for (auto c : kalimat) {
        if (urut >= (kalimat.length()-urut)) {
            cout << c << endl;
        }
        urut++;
    }
    
    return 0;
}