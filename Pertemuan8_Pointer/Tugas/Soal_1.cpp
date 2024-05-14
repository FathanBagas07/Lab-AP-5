#include <iostream>
using namespace std;

int main() {
    system("cls");
    cout << "Bilangan Ganjil dan Alamat Memorinya" << endl;
    int bilGanjil[10];

    for (int i = 0; i < 10; i++) {
        bilGanjil[i] = 2*i+1;
        cout << bilGanjil[i] << " Alamatnya : " << &bilGanjil[i] << endl;
    }

    return 0;
}