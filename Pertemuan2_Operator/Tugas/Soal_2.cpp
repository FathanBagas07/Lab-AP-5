#include <iostream>
#include <cmath>//untuk dapat menggunakan sqrt
using namespace std;

int main () {
    system ("cls");

    cout << "Progarm Menghitung Nilai Akar-Akar Persamaan Kuadrat dengan Rumus ABC\n";
    cout << "=====================================================================\n";
    cout << "Input Nilai A : ";
    float a;
    cin >> a;

    cout << "Input Nilai B : ";
    float b;
    cin >> b;

    cout << "Input Nilai C : ";
    float c;
    cin >> c;

    float x1 = ((-b)+sqrt(((b*b)-(4*a*c))))/(2*a);
    float x2 = ((-b)-sqrt(((b*b)-(4*a*c))))/(2*a);

    cout << "Nilai X1 = " << x1 << endl;
    cout << "Nilai X2 = " << x2 << endl;
    return 0;
}