#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    
    cout << "Input Sebuah Kalimat  : ";
    string kalimat;
    getline (cin, kalimat);

    cout << "Input Huruf yang akan dihapus : ";
    char huruf;
    cin >> huruf;
    
    int terhapus;
    for (auto c : kalimat) {
        if (c != (toupper(huruf)) && c != tolower(huruf) ) {
            cout << c;
        }
        else {
            terhapus += 1;
        }
    } 
    cout << endl;
    cout << "Karakter Terhapus = " << terhapus;
    return 0;
}