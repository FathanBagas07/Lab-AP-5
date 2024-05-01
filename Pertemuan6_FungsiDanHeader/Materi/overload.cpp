#include <iostream>
using namespace std;

int operasi1(int num1, int num2) {
    return num1*num2;
}

int operasi1(float num1, float num2) {
    return num1/num2;
}

int main() {
    system("cls");

    int x = 5, y = 4;
    float n = 2.3, m = 2.2;
    
    cout << "Hasil perkalian: " << operasi1(x, y) << endl;
    cout << "Hasil perkalian: " << operasi1(n, m) << endl;
    
    
    return 0;
}