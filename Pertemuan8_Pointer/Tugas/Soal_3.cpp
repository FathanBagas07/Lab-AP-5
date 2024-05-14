#include <iostream>
#include <cstring>//Untuk menggunakan fungsi strlen()
using namespace std;

int main() {
    system("cls");
    char kata[] = "K O M P U T E R";
    char *ptr;
    int indeks = 0;

    for (int i = 0; i < strlen(kata)/* Menghitung array karakter*/; i++) {
        if (kata[i] >= 'A' && kata[i] <= 'Z') {
            indeks++;
            if (indeks == 5) {
                ptr = &kata[i];
                break;
            }
        }
    }

    cout << "Huruf kelima dari kata \"" << kata << "\" adalah: " << *ptr << endl;

    return 0;
}