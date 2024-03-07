#include <iostream>

using namespace std;

int main() {

    system ("cls");
    string input1, input2;
    cout << "Perbedaan Cin dan Getline" << endl;\
    cout << "=========================" << endl;
    cout << "Penggunaan Getline\n";
    cout << "input\n";
    cout << "Masukkan sebuah kalimat : ";
    getline (cin, input1);
    system ("cls");
    cout << "Penggunaan Getline\n";
    cout << "Outputnya : " << input1 << endl;
    system ("pause");

    system ("cls");
    cout << "Penggunaan Cin \n";
    cout << "Input\nMasukkkan kalimat yang sama : ";
    cin >> input2;
    system ("cls");
    cout << "Penggunaan Cin\n";
    cout << "Outputnya : " << input2 << endl;
}