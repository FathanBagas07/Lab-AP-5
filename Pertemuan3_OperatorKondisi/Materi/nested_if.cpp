#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int umur;

    cout << "Berapa Umur Kamu : ";
    cin >> umur;

    if (umur < 0 ) {
        cout << "Berarti dia bukan manusia";
    }
    else{
        if (umur > 0 && umur < 5) {
            cout << "Balita";
        }
        else if (umur >5 && umur<=17) {
            cout << "remaja";
        }
        else if (umur >=18 && umur<60) {
            cout << "dewasa";
        }
        else if (umur >=60 && umur <=70) {
            cout << "lansia";
        }
        else {
            cout << "Super hero";
        }
    }
    return 0;
}