#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int umur;

    cout << "Masukkan Umur mu : ";
    cin >> umur;

    if (umur < 0 ) {
        cout << "Berarti dia bukan manusia";
    }
    else{
        switch (umur)
        {
        case 1 ... 10 : 
            cout << "Anak-anak";
            break;
        case 11 ... 17:
            cout << "Remaja";
            break;
        case 18 ... 59 :
            cout << "Dewasa";
            break;
        case 60 ... 70:
            cout << "Lansia";
            break;
        default: cout << "Super Hero";
            break;
        }
    }
    return 0;
}