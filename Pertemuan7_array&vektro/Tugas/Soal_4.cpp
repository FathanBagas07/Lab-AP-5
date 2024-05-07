#include <iostream>
#include <vector> 
using namespace std;

int main() {
    char ulang;

    do {
    system("cls");
    
    vector<int>input;
    int nilai;
    
    cout << "Masukkan Inputan (akhiri dengan menekan enter) : ";
    while (cin >> nilai) {
        input.push_back(nilai);
        if (cin.peek() == '\n') {
            break;
        }
    }

    system ("cls");
    for (auto elemen : input) {
        cout << elemen << ' ';
    }
    cout << endl;
    cout << "Panjang Vektor : " << input.size() << endl;
    
    while (!input.empty()) {
        cout << input.front() << endl;
        input.erase(input.begin());
    }

    cout << "Panjang Vektor : " << input.size() << endl;

    cout << endl;
    cout << "Apakah anda ingin mengulang progarm (Y/T) ? : ";
    cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');
    return 0;
}