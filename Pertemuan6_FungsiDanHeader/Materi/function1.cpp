#include <iostream>
using namespace std;

//  Variabel Global
int num3 = 10;

// int sumNumber(int num1, int num2 = 10) {
//     int num 3 = `10;
//     variabel lokal
//     return num1+num2;
// }

int sumNumber();


int main() {
    system("cls");

    cout << num3 << endl;
    
    int hasil = sumNumber(5, 10);
    cout << "Hasil = " << hasil;
    
    return 0;
}