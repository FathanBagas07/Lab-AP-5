#include <iostream>
using namespace std;

int main() {

    system ("cls");
    
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = tinggi; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
