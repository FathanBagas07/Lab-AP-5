#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    system("cls");
    char lanjut;
    do {
    cout << "Input Sebuah Bilangan : ";
    int bilangan;
    cin >> bilangan;

    int pembagi = 0;
    string status;
    for (int i=1; i<=bilangan; i++) {
        int mod = bilangan % i;
        if (mod == 0) {
            pembagi+=1;
        }
    }
    if (pembagi == 2) {
        status = "Prima";
    }
    else {
        status = "Bukan Prima";
    }
    cout << "Status : " << status << endl;
    
    
    cout << "Ulang Program (Y/T) : ";
    cin >> lanjut;
    lanjut=tolower(lanjut);
    cout << endl;
    }
    while (lanjut == 'y');
    return 0;
}