#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int x = 5;
    while (x > 0)
    {
        cout << "Hello Word " << x << endl;
        x--;
    }
    
    int angka;

    // 0 < angka < 10
    cout << "Masukkan angka: ";
    cin >> angka;

    while (angka < 0 || angka > 10) {
        
    }
    
    return 0;
}