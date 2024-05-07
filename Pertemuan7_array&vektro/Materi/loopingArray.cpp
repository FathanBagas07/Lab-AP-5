#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int arraNilai[10] = {0, 10, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int nilai : arrayNilai) {
        cout << "Adress " << &nilai << " --> " << nilai << endl;
        // nilai = 1;
    }

    for (int &nilaiRef : arrayNilai) {
        nilaiRef *= 2;
    }
    
    for (int &nilaiRef : arrayNilai) {
        cout << "Address " << &nilaiRef << " --> " << nilaiRef << endl;
    }

    return 0;
}