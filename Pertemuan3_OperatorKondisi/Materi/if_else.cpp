#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    char nilai;
    cout << "Berapa nilai kamu : ";
    cin >> nilai;

    if (nilai=='A') {
        cout << "Pertahankan Nilai Mu";
    }
    else if (nilai=='B') {
        cout << "Lebih giat belajar";
    }
    else if (nilai=='C') {
        cout << "Waduhh";
    }
    else if (nilai == 'D') {
        cout << "Wahhh parah";
    }
    else if (nilai == 'E') {
        cout << "Jangan banyak maen makanya";
    }
    else {
        cout << "Waduh input mu salah (coba pakek huruf besar A,B,C,D, atau E)";
    }
    return 0;
}