#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("cls");
    
    char lanjut;
    do {
        system ("cls");
        cout << "Input Sebuah Bilangan : ";
        int bilangan;
        cin >> bilangan;

        int i = 0;
        int kuadrat = 0;
        while (i<=bilangan) {
            if (i % 2 == 0) {
                kuadrat += (pow(i, 2));
            }
            i++;
        }
        cout << "Hasil : " << kuadrat << endl;
        cout << "Ulang Program (Y/T) : ";
        cin >> lanjut;
        lanjut = tolower(lanjut);
    }
    while (lanjut == 'y');
    return 0;
}