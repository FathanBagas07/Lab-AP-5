#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Masukkan Bilangan Bulat : ";
    int input;
    cin >> input;
    cout << endl;

    if (input%2==0) {
        cout << input << " adalah bilangan genap" << endl;
    }
    else {
        cout << input << " adalah bilangan ganjil" << endl;
    }
    
    return 0;
}