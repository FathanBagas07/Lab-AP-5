#include <iostream>
using namespace std;
int main() {
    system ("cls");
    string nama;
    int nim;
    char kom[1];
    float ipk;
    cout << "Mohon Input Data\n";
    cout << "================\n";
    cout << "Nama      : ";
    getline (cin, nama);
    cout << "NIM       : ";
    cin >> nim;
    cout << "Kom       : ";
    cin >> kom;
    cout << "IPK       : ";
    cin >> ipk;

    system ("cls");
    cout << "Data Mahasiswa\n";
    cout << "==============\n";
    cout << "Nama      : " << nama <<  endl;
    cout << "Nim       : " << nim  << endl;
    cout << "Kom       : " << kom  << endl;
    cout << "IPK       : " << ipk  << endl;
}