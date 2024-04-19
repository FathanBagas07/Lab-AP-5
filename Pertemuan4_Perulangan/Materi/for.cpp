#include <iostream>
#include <string>
using namespace std;

int main() {
    system ("cls");
    string nama;
    cout << "Masukkan nama: ";
    getline(cin, nama); 

    for (char& c : nama) {
        switch (c) {
            case 'a':
            case 'A':
            case 'i':
            case 'I':
            case 'u':
            case 'U':
            case 'e':
            case 'E':
            case 'o':
            case 'O':
                c = 'o'; 
                break;
            default:
                break;
        }
        cout << c; 
        cout << endl; 
    }

    return 0;
}
